bool FileManager::Save(const wxString& name, const wxString& data, wxFontEncoding encoding, bool bom)
{
        wxFile f;
    	wxCSConv conv(encoding);
	wxCharBuffer buf = data.mb_str(conv);
	size_t len;
	len = strlen(buf);
	if (!f.Open(name, wxFile::write, wxS_DEFAULT)) {return false;}
	if (f.Write(buf, len) != len) {return false;}
	if (!f.Close()) {return false;}
	return true;
}
