@interface MMQuickSendEmoticonView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    UICollectionView * m_collectionView; // +0x8
    UICollectionViewFlowLayout * m_collectionLayout; // +0x10
    NSArray * m_wrapList; // +0x18
    NSString * m_desc; // +0x20
    MMTimer * m_timer; // +0x28
    double m_timeInterval; // +0x30
    int m_viewCount; // +0x38
    unsigned long long m_startTime; // +0x40
    BOOL _didReportSearchExposure; // +0x48
    BOOL _hasReportSearchExposeNew; // +0x49
    int _fromScene; // +0x4c
    id <MMQuickSendEmoticonViewDelegate> _delegate; // +0x50
    NSString * _sessionId; // +0x58
    double _bottomX; // +0x60
    unsigned long long _startShowTimestamp; // +0x68
    MMQuickSendEmoticonBackgroundView * _backgroundView; // +0x70
    NSMutableDictionary * _hasExposedIndex; // +0x78
    unsigned long long _requestId; // +0x80
}
- (id)init;
- (id)curShowingDesc;
- (void)setFromScene:(int)arg1;
- (void)setEmoticonWrapList:(id)arg1 desc:(id)arg2;
- (void)setEmoticonWrapList:(id)arg1 desc:(id)arg2 maxViewRightPos:(double)arg3;
- (unsigned long long)emoticonWrapCount;
- (void)hide;
- (void)configCollectionView;
- (void)showQuickSendEmoticonView;
- (id)getChatId;
- (void)makeCommonReportHeader:(id)arg1;
- (void)makeCommonEmoticonReportParams:(id)arg1 emoticonWrap:(id)arg2 index:(int)arg3;
- (void)reportWhenExpose;
- (void)reportWhenClick:(id)arg1 index:(int)arg2;
- (void)reportWhenUnexpose;
- (void)reportWhenSlideEnd;
- (void)reportWhenSearchEvent:(id)arg1;
- (void)checkNeedHide;
- (void)hideQuickSendEmoticonView;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)reportEvent:(id)arg1 eventId:(id)arg2 params:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (double)bottomX;
- (void)setBottomX:(double)arg1;
- (unsigned long long)startShowTimestamp;
- (void)setStartShowTimestamp:(unsigned long long)arg1;
- (BOOL)didReportSearchExposure;
- (void)setDidReportSearchExposure:(BOOL)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (BOOL)hasReportSearchExposeNew;
- (void)setHasReportSearchExposeNew:(BOOL)arg1;
- (id)hasExposedIndex;
- (void)setHasExposedIndex:(id)arg1;
- (int)fromScene;
- (unsigned long long)requestId;
- (void)setRequestId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
