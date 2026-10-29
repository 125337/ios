@interface WCFinderFeedStickerAdViewModel : NSObject
{
    BOOL _isLock; // +0x8
    BOOL _playLoop; // +0x9
    BOOL _hasShowInlineStickerAd; // +0xa
    BOOL _hasStickerAdMeta; // +0xb
    int _scene; // +0xc
    WCFinderFeedStickerAdMeta * _currentShowMeta; // +0x10
    NSString * _debugMessage; // +0x18
    double _inlineStickerAdVideoCurrentTime; // +0x20
    long long _inlineStickerAdRemainingSeconds; // +0x28
    WCFinderFeedStickerAdMeta * _pendingToastMeta; // +0x30
    NSMutableArray * _metaShowArray; // +0x38
    NSMutableArray * _metaRequestArray; // +0x40
    NSString * _refTid; // +0x48
    unsigned long long _appearCondition; // +0x50
    FinderAdPreMovieAdInfo * _adInfo; // +0x58
}
- (id)initWithAdInfo:(id)arg1 feedId:(id)arg2 scene:(int)arg3;
- (void)checkShouldRequestWithPosition:(double)arg1;
- (void)showMeta:(id)arg1;
- (void)cleanShowMeta;
- (void)cleanShowMetaForRestore;
- (void)_skipMeta:(id)arg1;
- (id)_findAvailableMetaForPlaySecond:(unsigned long long)arg1 position:(double)arg2;
- (unsigned long long)uiStateWithPosition:(double)arg1 duration:(double)arg2 meta:(id *)arg3;
- (void)cancelPendingToastMeta;
- (BOOL)isBlockingLandscape;
- (id)toastTitle;
- (id)promotionalInfojumpInfo;
- (BOOL)isLock;
- (void)setIsLock:(BOOL)arg1;
- (id)currentShowMeta;
- (void)setCurrentShowMeta:(id)arg1;
- (id)debugMessage;
- (void)setDebugMessage:(id)arg1;
- (BOOL)playLoop;
- (void)setPlayLoop:(BOOL)arg1;
- (BOOL)hasShowInlineStickerAd;
- (void)setHasShowInlineStickerAd:(BOOL)arg1;
- (double)inlineStickerAdVideoCurrentTime;
- (void)setInlineStickerAdVideoCurrentTime:(double)arg1;
- (long long)inlineStickerAdRemainingSeconds;
- (void)setInlineStickerAdRemainingSeconds:(long long)arg1;
- (id)pendingToastMeta;
- (void)setPendingToastMeta:(id)arg1;
- (BOOL)hasStickerAdMeta;
- (void)setHasStickerAdMeta:(BOOL)arg1;
- (id)metaShowArray;
- (void)setMetaShowArray:(id)arg1;
- (id)metaRequestArray;
- (void)setMetaRequestArray:(id)arg1;
- (id)refTid;
- (void)setRefTid:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (unsigned long long)appearCondition;
- (void)setAppearCondition:(unsigned long long)arg1;
- (id)adInfo;
- (void)setAdInfo:(id)arg1;
- (void).cxx_destruct;
@end
