@interface WCFinderContentCarouselViewModel : NSObject
{
    BOOL _showCarousel; // +0x8
    BOOL _hasCompleteCarouselMediaComment; // +0x9
    BOOL _cancelCarouselMediaComment; // +0xa
    BOOL _hasTouchCell; // +0xb
    BOOL _hadShowRegardfulCarsouselTips; // +0xc
    BOOL _headerViewCantShowRegardfulCarsouselTips; // +0xd
    BOOL _jumpCarouselHighPriorty; // +0xe
    unsigned long long _curCarouselType; // +0x10
    double _carouselExposeStartTime; // +0x18
    double _carouselInterval; // +0x20
    NSArray * _carouselHotCommentList; // +0x28
    NSArray * _carouselMediaCommentList; // +0x30
    NSArray * _carouselJumpInfoList; // +0x38
    NSString * _regardfulCarouselString; // +0x40
    unsigned long long _carouselOptionFlag; // +0x48
}
- (void)reset;
- (void)setCarouselMediaCommentList:(id)arg1;
- (CGSize)commentMediaDisplaySize:(id)arg1;
- (CGSize)adjustedImageSizeForOriginalSize:(CGSize)arg1;
- (CGSize)adjustedEmojiSizeForOriginalSize:(CGSize)arg1;
- (BOOL)showCarousel;
- (void)setShowCarousel:(BOOL)arg1;
- (unsigned long long)curCarouselType;
- (void)setCurCarouselType:(unsigned long long)arg1;
- (double)carouselExposeStartTime;
- (void)setCarouselExposeStartTime:(double)arg1;
- (double)carouselInterval;
- (void)setCarouselInterval:(double)arg1;
- (BOOL)hasCompleteCarouselMediaComment;
- (void)setHasCompleteCarouselMediaComment:(BOOL)arg1;
- (BOOL)hasCancelCarouselMediaComment;
- (void)setCancelCarouselMediaComment:(BOOL)arg1;
- (id)carouselHotCommentList;
- (void)setCarouselHotCommentList:(id)arg1;
- (id)carouselMediaCommentList;
- (id)carouselJumpInfoList;
- (void)setCarouselJumpInfoList:(id)arg1;
- (id)regardfulCarouselString;
- (void)setRegardfulCarouselString:(id)arg1;
- (unsigned long long)carouselOptionFlag;
- (void)setCarouselOptionFlag:(unsigned long long)arg1;
- (BOOL)hasTouchCell;
- (void)setHasTouchCell:(BOOL)arg1;
- (BOOL)hadShowRegardfulCarsouselTips;
- (void)setHadShowRegardfulCarsouselTips:(BOOL)arg1;
- (BOOL)headerViewCantShowRegardfulCarsouselTips;
- (void)setHeaderViewCantShowRegardfulCarsouselTips:(BOOL)arg1;
- (BOOL)jumpCarouselHighPriorty;
- (void)setJumpCarouselHighPriorty:(BOOL)arg1;
- (void).cxx_destruct;
@end
