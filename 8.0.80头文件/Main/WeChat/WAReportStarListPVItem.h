@interface WAReportStarListPVItem : WAReportBaseItem
{
    unsigned int _showTimestamp; // +0x8
    unsigned long long _starListEnterScene; // +0x10
    unsigned long long _starCount; // +0x18
    NSString * _starAppidList; // +0x20
}
- (id)reportString;
- (unsigned long long)starListEnterScene;
- (void)setStarListEnterScene:(unsigned long long)arg1;
- (unsigned long long)starCount;
- (void)setStarCount:(unsigned long long)arg1;
- (id)starAppidList;
- (void)setStarAppidList:(id)arg1;
- (unsigned int)showTimestamp;
- (void)setShowTimestamp:(unsigned int)arg1;
- (void).cxx_destruct;
@end
