#pragma once
#include <zlib.h>
#include <zip.h>
#include <vector>

class ZipExtractor
{
public:
	ZipExtractor(TCHAR* lpInputPath, TCHAR* lpOutputDirectory);
	~ZipExtractor();

	void Extract();

private:
	zip_source_t* m_zipSource;
	zip_t* m_zip;
	TCHAR* m_lpOutputDirectory;
	std::vector<std::string> noEncryptionArchives{ "units.pak","alphamasks.pak","hats.pak","hairs.pak","cards.pak"};
	bool isWhitelistedArchive = false;
};

