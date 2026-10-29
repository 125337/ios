@interface WCFileBrowseSectionInfo : NSObject
{
    NSMutableArray * _browseInfoArray; // +0x8
    NSString * _sectionTitle; // +0x10
    unsigned long long _beginTime; // +0x18
    unsigned long long _endTime; // +0x20
}
- (id)init;
- (id)description;
- (id)browseInfoArray;
- (void)setBrowseInfoArray:(id)arg1;
- (id)sectionTitle;
- (void)setSectionTitle:(id)arg1;
- (unsigned long long)beginTime;
- (void)setBeginTime:(unsigned long long)arg1;
- (unsigned long long)endTime;
- (void)setEndTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

