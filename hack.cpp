bool FileManager::Save(const wxString& name, const wxString& data, wxFontEncoding encoding, bool bom)
{
        wxFile f;
	size_t len;
	len = data.Len();
	if (!f.Open(name, wxFile::write, wxS_DEFAULT)) {return false;}
	if (f.Write(data, len) != len) {return false;}
	if (!f.Close()) {return false;}
	return true;
}
