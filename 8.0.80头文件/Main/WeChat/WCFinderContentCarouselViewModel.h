@interface WCFinderContentCarouselViewModel : NSObject
{
    BOOL _showCarousel; // +0x8
    BOOL _hasCompleteCarouselMediaComment; // +0x9
    BOOL _cancelCarouselMediaComment; // +0xa
    BOOL _stopAllCarousels; // +0xb
    BOOL _hasTouchCell; // +0xc
    BOOL _hadShowRegardfulCarsouselTips; // +0xd
    BOOL _hadClickRegardfulCarsouselTips; // +0xe
    BOOL _jumpCarouselHighPriorty; // +0xf
    int _carouselOptionFlag; // +0x10
    unsigned long long _curCarouselType; // +0x18
    double _carouselExposeStartTime; // +0x20
    double _carouselInterval; // +0x28
    NSArray * _carouselHotCommentList; // +0x30
    NSArray * _carouselMediaCommentList; // +0x38
    unsigned long long _totalImageCommentCount; // +0x40
    NSArray * _carouselJumpInfoList; // +0x48
    NSString * _regardfulCarouselString; // +0x50
    NSMutableOrderedSet * _exposedHotCommentStatSet; // +0x58
    NSMutableOrderedSet * _clickedHotCommentStatSet; // +0x60
}
- (void)reset;
- (void)setStopAllCarousels:(BOOL)arg1;
- (void)setCarouselMediaCommentList:(id)arg1;
- (CGSize)commentMediaDisplaySize:(id)arg1;
- (CGSize)adjustedImageSizeForOriginalSize:(CGSize)arg1;
- (CGSize)adjustedEmojiSizeForOriginalSize:(CGSize)arg1;
- (id)exposedHotCommentStatSet;
- (id)clickedHotCommentStatSet;
- (void)recordHotCommentExposureWithCommentID:(unsigned long long)arg1 playProgress:(double)arg2;
- (void)recordHotCommentClickWithCommentID:(unsigned long long)arg1 playProgress:(double)arg2;
- (id)genOriginCommentInfo;
- (void)resetHotCommentStatsSet;
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
- (BOOL)isAllCarouselsStopped;
- (id)carouselHotCommentList;
- (void)setCarouselHotCommentList:(id)arg1;
- (id)carouselMediaCommentList;
- (unsigned long long)totalImageCommentCount;
- (void)setTotalImageCommentCount:(unsigned long long)arg1;
- (id)carouselJumpInfoList;
- (void)setCarouselJumpInfoList:(id)arg1;
- (id)regardfulCarouselString;
- (void)setRegardfulCarouselString:(id)arg1;
- (int)carouselOptionFlag;
- (void)setCarouselOptionFlag:(int)arg1;
- (BOOL)hasTouchCell;
- (void)setHasTouchCell:(BOOL)arg1;
- (BOOL)hadShowRegardfulCarsouselTips;
- (void)setHadShowRegardfulCarsouselTips:(BOOL)arg1;
- (BOOL)hadClickRegardfulCarsouselTips;
- (void)setHadClickRegardfulCarsouselTips:(BOOL)arg1;
- (void)setExposedHotCommentStatSet:(id)arg1;
- (void)setClickedHotCommentStatSet:(id)arg1;
- (BOOL)jumpCarouselHighPriorty;
- (void)setJumpCarouselHighPriorty:(BOOL)arg1;
- (void).cxx_destruct;
@end
