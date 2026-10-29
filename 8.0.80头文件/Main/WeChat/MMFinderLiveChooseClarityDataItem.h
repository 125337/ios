@interface MMFinderLiveChooseClarityDataItem : NSObject
{
    BOOL _isSelect; // +0x8
    BOOL _isDefault; // +0x9
    MMLiveCdnStreamInfo * _streamInfo; // +0x10
    VideoParams * _videoParams; // +0x18
    NSString * _title; // +0x20
}
- (BOOL)isAnchorClarity;
- (id)streamInfo;
- (void)setStreamInfo:(id)arg1;
- (id)videoParams;
- (void)setVideoParams:(id)arg1;
- (BOOL)isSelect;
- (void)setIsSelect:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (BOOL)isDefault;
- (void)setIsDefault:(BOOL)arg1;
- (void).cxx_destruct;
@end
