@interface TextStateEmojiBoardReportObject : NSObject
{
    BOOL _isRecentUsedSectionValid; // +0x8
    BOOL _isRecommendSectionValid; // +0x9
    unsigned long long _showTimeStamp; // +0x10
    unsigned long long _hideTimeStamp; // +0x18
    NSString * _publishId; // +0x20
    long long _selectIconFrom; // +0x28
}
- (void)showEmojiBoard;
- (void)hideEmojiBoard;
- (void)tapEmojiIcon:(id)arg1 groupDescription:(id)arg2 iconSelectFrom:(long long)arg3;
- (unsigned long long)showTimeStamp;
- (void)setShowTimeStamp:(unsigned long long)arg1;
- (unsigned long long)hideTimeStamp;
- (void)setHideTimeStamp:(unsigned long long)arg1;
- (id)publishId;
- (void)setPublishId:(id)arg1;
- (BOOL)isRecentUsedSectionValid;
- (void)setIsRecentUsedSectionValid:(BOOL)arg1;
- (BOOL)isRecommendSectionValid;
- (void)setIsRecommendSectionValid:(BOOL)arg1;
- (long long)selectIconFrom;
- (void)setSelectIconFrom:(long long)arg1;
- (void).cxx_destruct;
@end
