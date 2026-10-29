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
    id <MMQuickSendEmoticonViewDelegate> _delegate; // +0x50
    NSString * _sessionId; // +0x58
    double _bottomX; // +0x60
    unsigned long long _startShowTimestamp; // +0x68
}
- (id)init;
- (id)curShowingDesc;
- (void)setEmoticonWrapList:(id)arg1 desc:(id)arg2;
- (unsigned long long)emoticonWrapCount;
- (void)hide;
- (void)configCollectionView;
- (void)showQuickSendEmoticonView;
- (void)checkNeedHide;
- (void)hideQuickSendEmoticonView;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
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
- (void).cxx_destruct;
@end

