@interface MMFinderLiveFeedStreamCarouselSingleCtrl : NSObject
{
    BOOL _hasShown; // +0x8
    unsigned int _styleId; // +0xc
    unsigned int _waitMillisecond; // +0x10
    unsigned int _showMillisecond; // +0x14
}
- (unsigned int)styleId;
- (void)setStyleId:(unsigned int)arg1;
- (unsigned int)waitMillisecond;
- (void)setWaitMillisecond:(unsigned int)arg1;
- (unsigned int)showMillisecond;
- (void)setShowMillisecond:(unsigned int)arg1;
- (BOOL)hasShown;
- (void)setHasShown:(BOOL)arg1;
@end
