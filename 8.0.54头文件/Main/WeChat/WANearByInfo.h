@interface WANearByInfo : MMObject
{
    BOOL _disappearOneClick; // +0x8
    BOOL _openWxa; // +0x9
    unsigned int _displayStrategyId; // +0xc
    unsigned int _nearByAppH5LifeSpan; // +0x10
    unsigned int _appCount; // +0x14
    unsigned int _nearByAppThreshold; // +0x18
    unsigned int _startTime; // +0x1c
    NSString * _nearByAppH5String; // +0x20
    NSString * _listId; // +0x28
    NSArray * _previewItems; // +0x30
    NSString * _wording; // +0x38
    NSString * _wordingColor; // +0x40
    NSString * _noticeWording; // +0x48
    NSString * _noticeWordingBgColor; // +0x50
    WANearByPreViewItem * _nearByEntry; // +0x58
}
- (id)nearByAppH5String;
- (void)setNearByAppH5String:(id)arg1;
- (unsigned int)displayStrategyId;
- (void)setDisplayStrategyId:(unsigned int)arg1;
- (unsigned int)nearByAppH5LifeSpan;
- (void)setNearByAppH5LifeSpan:(unsigned int)arg1;
- (unsigned int)appCount;
- (void)setAppCount:(unsigned int)arg1;
- (id)listId;
- (void)setListId:(id)arg1;
- (unsigned int)nearByAppThreshold;
- (void)setNearByAppThreshold:(unsigned int)arg1;
- (id)previewItems;
- (void)setPreviewItems:(id)arg1;
- (unsigned int)startTime;
- (void)setStartTime:(unsigned int)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (id)wordingColor;
- (void)setWordingColor:(id)arg1;
- (id)noticeWording;
- (void)setNoticeWording:(id)arg1;
- (id)noticeWordingBgColor;
- (void)setNoticeWordingBgColor:(id)arg1;
- (BOOL)disappearOneClick;
- (void)setDisappearOneClick:(BOOL)arg1;
- (BOOL)openWxa;
- (void)setOpenWxa:(BOOL)arg1;
- (id)nearByEntry;
- (void)setNearByEntry:(id)arg1;
- (void).cxx_destruct;
@end

