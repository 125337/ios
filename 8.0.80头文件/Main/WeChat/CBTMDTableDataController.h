@interface CBTMDTableDataController : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, CBTMDTableCellDelegate, CBTStreamMDFeederDelegate>
{
    BOOL _hasReceiveAllChunk; // +0x8
    BOOL _isOnProcessing; // +0x9
    BOOL _hasProcessedFirstRowDistribution; // +0xa
    id <CBTMDTableDataControllerDelegate> _delegate; // +0x10
    unsigned long long _columnCount; // +0x18
    CBTMDTableConfig * _config; // +0x20
    id /* block */ _tableDataStreamTaskCompleteHandle; // +0x28
    CBTStreamMDFeeder * _mainFeeder; // +0x30
    CBTTextAttachment * _boundAttachment; // +0x38
    UICollectionView * _collectionView; // +0x40
    CBTMDTableLayout * _tableLayout; // +0x48
    NSMutableArray * _cells; // +0x50
    NSMutableArray * _columnWidths; // +0x58
    NSMutableArray * _rowHeights; // +0x60
    NSMutableArray * _columnAlignments; // +0x68
    unsigned long long _currentRow; // +0x70
    unsigned long long _currentColumn; // +0x78
    NSMutableArray * _streamChunkArr; // +0x80
    double _lastColumnAdjustWidth; // +0x88
    double _lastHeight; // +0x90
    CBTMDTableCellData * _activeStreamingCellData; // +0x98
    CBTMDTableStreamChunk * _pendingFeedEndChunk; // +0xa0
    CADisplayLink * _sharedDisplayLink; // +0xa8
    NSHashTable * _animatingTextViews; // +0xb0
    double _lastSharedTimestamp; // +0xb8
}
- (id)initWithColumnCount:(unsigned long long)arg1 config:(id)arg2;
- (unsigned long long)rowCount;
- (double)cellMaxWidth;
- (double)cellPadding;
- (double)cellSpacing;
- (void)checkAllChunkToComplete;
- (void)adjustLastColumnWidthIfNeeded;
- (void)appendCell:(id)arg1 row:(unsigned long long)arg2 column:(unsigned long long)arg3 isHeader:(BOOL)arg4;
- (void)realAppendCell:(id)arg1 row:(unsigned long long)arg2 column:(unsigned long long)arg3 isHeader:(BOOL)arg4;
- (void)insertNewCellWithContent:(id)arg1 rowHeight:(double)arg2 columnWidth:(double)arg3 alignment:(int)arg4 row:(unsigned long long)arg5 column:(unsigned long long)arg6 isHeader:(BOOL)arg7 needInsertSections:(BOOL)arg8 sectionsToInsert:(id)arg9;
- (void)reloadCellAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (void)startNewRow;
- (id)cellDataAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (double)columnWidth:(unsigned long long)arg1;
- (double)rowHeight:(unsigned long long)arg1;
- (double)totalWidth;
- (double)totalHeight;
- (void)setColumnAlignment:(int)arg1 forColumn:(unsigned long long)arg2;
- (void)updateColumnWidth:(double)arg1 forColumn:(unsigned long long)arg2;
- (void)updateRowHeight:(double)arg1 forRow:(unsigned long long)arg2;
- (int)columnAlignment:(unsigned long long)arg1;
- (void)safePerformBatchUpdates:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)createCellDataWithRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (void)addNewRow;
- (void)notifyDataUpdate;
- (void)reloadData;
- (void)updateSize;
- (void)notifyUpdateGradientMasksWithOffsetX:(double)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onFeederDidFinish;
- (id)footnoteDefInfoListForCell:(id)arg1;
- (void)onCellSizeChange:(id)arg1 row:(unsigned long long)arg2 column:(unsigned long long)arg3 size:(CGSize)arg4;
- (void)onCell:(id)arg1 clickLink:(id)arg2;
- (CGSize)calculateTextSize:(id)arg1 maxWidth:(double)arg2;
- (void)checkAndFeedEndForRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (void)finishCellStreamingForRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (void)tryProccessStreamTask;
- (void)proccessStreamTask;
- (void)registerAnimatingTextView:(id)arg1;
- (void)ensureSharedDisplayLink;
- (void)sharedDisplayLinkTick:(id)arg1;
- (void)dealloc;
- (void)scaleFontsByRatio:(double)arg1;
- (void)_scaleFontsInAttributedString:(id)arg1 ratio:(double)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)columnCount;
- (void)setColumnCount:(unsigned long long)arg1;
- (id)config;
- (id /* block */)tableDataStreamTaskCompleteHandle;
- (void)setTableDataStreamTaskCompleteHandle:(id /* block */)arg1;
- (BOOL)hasReceiveAllChunk;
- (void)setHasReceiveAllChunk:(BOOL)arg1;
- (id)mainFeeder;
- (void)setMainFeeder:(id)arg1;
- (id)boundAttachment;
- (void)setBoundAttachment:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)tableLayout;
- (void)setTableLayout:(id)arg1;
- (id)cells;
- (void)setCells:(id)arg1;
- (id)columnWidths;
- (void)setColumnWidths:(id)arg1;
- (id)rowHeights;
- (void)setRowHeights:(id)arg1;
- (id)columnAlignments;
- (void)setColumnAlignments:(id)arg1;
- (unsigned long long)currentRow;
- (void)setCurrentRow:(unsigned long long)arg1;
- (unsigned long long)currentColumn;
- (void)setCurrentColumn:(unsigned long long)arg1;
- (id)streamChunkArr;
- (void)setStreamChunkArr:(id)arg1;
- (BOOL)isOnProcessing;
- (void)setIsOnProcessing:(BOOL)arg1;
- (BOOL)hasProcessedFirstRowDistribution;
- (void)setHasProcessedFirstRowDistribution:(BOOL)arg1;
- (double)lastColumnAdjustWidth;
- (void)setLastColumnAdjustWidth:(double)arg1;
- (double)lastHeight;
- (void)setLastHeight:(double)arg1;
- (id)activeStreamingCellData;
- (void)setActiveStreamingCellData:(id)arg1;
- (id)pendingFeedEndChunk;
- (void)setPendingFeedEndChunk:(id)arg1;
- (id)sharedDisplayLink;
- (void)setSharedDisplayLink:(id)arg1;
- (id)animatingTextViews;
- (void)setAnimatingTextViews:(id)arg1;
- (double)lastSharedTimestamp;
- (void)setLastSharedTimestamp:(double)arg1;
- (void).cxx_destruct;
@end
