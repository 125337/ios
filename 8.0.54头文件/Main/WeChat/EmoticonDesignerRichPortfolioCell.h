@interface EmoticonDesignerRichPortfolioCell : MMStoreEmotionBaseAllCell <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, EmoticonPreviewWindowViewControllerDelegate>
{
    BOOL _showDownloadView; // +0x8
    BOOL _needStaticsInfo; // +0x9
    id <EmoticonDesignerRichPortfolioCellDelegate> _delegate; // +0x10
    EmoticonStoreReportInfo * _reportInfo; // +0x18
    UIView * _bottomViewContainer; // +0x20
    UICollectionView * _emojiCollection; // +0x28
    UIView * _downloadAndSendCountView; // +0x30
    UICollectionViewFlowLayout * _emojiCollectionLayout; // +0x38
    double _cellSize; // +0x40
    unsigned long long _cellNum; // +0x48
    UILongPressGestureRecognizer * _longPressGestureRecognizer; // +0x50
    NSIndexPath * _selectedIndexPath; // +0x58
    UILabel * _sendCountLabel; // +0x60
    UILabel * _downloadCountLabel; // +0x68
    UIImageView * _downloadImageView; // +0x70
    UIImageView * _sendImageView; // +0x78
    EmoticonPreviewWindowViewController * _emoticonPreview; // +0x80
}
+ (double)calcHeightWithIsShowCount:(BOOL)arg1 emojiCount:(unsigned long long)arg2 cellWidth:(double)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)setShowDownloadView:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)createOrUpdateLayout;
- (id)downloadLogicConfig;
- (BOOL)layoutStaticBtnWidth;
- (void)updateStoreItem:(id)arg1;
- (void)updateDownloadAndSendLabel;
- (void)configGestureRecognizer;
- (void)layoutSubviews;
- (void)layoutContentView;
- (void)layoutBottomContainer;
- (void)layoutDownloadAndSendCountView;
- (void)layoutBaseViewContainer;
- (void)calculateCellSize;
- (void)initBottomViewContainer;
- (void)initCollectionView;
- (void)initDownloadAndSendCountView;
- (BOOL)isRewardEnabled;
- (void)clearReddotIfNeeded;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)handleReward;
- (void)onTapGetEmoticonBtnFor:(unsigned long long)arg1;
- (double)downloadViewMaxWidth;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)onLongPressToPreview:(id)arg1;
- (void)onFinishPreviewAndChangeToPid:(id)arg1;
- (void)onShouldShowEmoticonDetailPage:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (BOOL)showDownloadView;
- (BOOL)needStaticsInfo;
- (void)setNeedStaticsInfo:(BOOL)arg1;
- (id)bottomViewContainer;
- (void)setBottomViewContainer:(id)arg1;
- (id)emojiCollection;
- (void)setEmojiCollection:(id)arg1;
- (id)downloadAndSendCountView;
- (void)setDownloadAndSendCountView:(id)arg1;
- (id)emojiCollectionLayout;
- (void)setEmojiCollectionLayout:(id)arg1;
- (double)cellSize;
- (void)setCellSize:(double)arg1;
- (unsigned long long)cellNum;
- (void)setCellNum:(unsigned long long)arg1;
- (id)longPressGestureRecognizer;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg1;
- (id)sendCountLabel;
- (void)setSendCountLabel:(id)arg1;
- (id)downloadCountLabel;
- (void)setDownloadCountLabel:(id)arg1;
- (id)downloadImageView;
- (void)setDownloadImageView:(id)arg1;
- (id)sendImageView;
- (void)setSendImageView:(id)arg1;
- (id)emoticonPreview;
- (void)setEmoticonPreview:(id)arg1;
- (void).cxx_destruct;
@end

