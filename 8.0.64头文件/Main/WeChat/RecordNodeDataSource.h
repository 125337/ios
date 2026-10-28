@interface RecordNodeDataSource : NSObject <RecordNodeDataSource>
{
    CommonMessageViewModel * _referMessageViewModel; // +0x8
}
- (double)GetRecordNodeContentHeight;
- (id)GetParent;
- (id)GetDataItem;
- (id)getThumbPathForData:(id)arg1;
- (id)GetThumbPath;
- (id)GetDataPath;
- (id)messageViewModel;
- (unsigned long long)getParserType;
- (unsigned int)GetParentLocalID;
- (id)GetImageLocalID;
- (id)GetMaskImagePath;
- (id)GetImagePath;
- (id)GetImageSourcePath;
- (int)GetImageDataDownloadStatus;
- (int)GetParentDownloadStatus;
- (id)GetAudioInfo;
- (unsigned int)GetVoiceFormat;
- (BOOL)IsUrlVideoThumbPath:(id *)arg1;
- (id)GetVideoTitle;
- (unsigned int)GetVideoDuration;
- (BOOL)IsUrlWebPageThumbPath:(id *)arg1 thumbResourceIdentifier:(id *)arg2;
- (id)GetWebPageDomin;
- (BOOL)IsUrlMusicThumbPath:(id *)arg1;
- (id)GetMusicInfo;
- (id)GetFileExt;
- (id)GetFileName;
- (id)GetFilePath;
- (id)GetSightPath;
- (BOOL)StartDownload;
- (id)GetEmoticonWrap;
- (CGSize)GetEmoticonSize;
- (void)UpdateEmoticonSize:(CGSize)arg1;
- (unsigned int)GetGameEmoticonContent;
- (CGSize)GetEmoticonLayoutSize;
- (void)IsUrlWeAppThumbPath:(id *)arg1 ThumbUrl:(id *)arg2;
- (id)referMessageViewModel;
- (BOOL)hasRefer;
- (BOOL)hasReferImage;
- (id)getReferImage;
- (id)referDesc;
- (id)referDescForAccessibility;
- (void)setReferMessageViewModel:(id)arg1;
- (void).cxx_destruct;
@end
