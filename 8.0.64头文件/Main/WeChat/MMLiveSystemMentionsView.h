@interface MMLiveSystemMentionsView : MMUIView <UITableViewDelegate, UITableViewDataSource, MMLiveSystemMentionCellDelegate>
{
    BOOL _isFolded; // +0x8
    id <MMLiveSystemMentionsViewDelegate> _delegate; // +0x10
    UIView * _mentionsTableViewContainer; // +0x18
    UITableView * _mentionsTableView; // +0x20
    MMUIButton * _arrowButton; // +0x28
    double _maxHeight; // +0x30
    NSMutableArray * _liveSystemMentions; // +0x38
    CGPoint _locationPoint; // +0x40
}
+ (double)singleSystemMentionHeight;
- (id)initWithMaxHeight:(double)arg1 width:(double)arg2;
- (void)initData;
- (void)updateDataOnFetchNewDone;
- (void)setupUIWith:(double)arg1 maxHeight:(double)arg2;
- (void)refreshUIOnDataReset;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)mentionsTableViewContainer;
- (id)mentionsTableView;
- (id)arrowButton;
- (BOOL)tableViewHasMask;
- (void)addMaskLayerForTableContainer;
- (void)expand;
- (void)fold;
- (void)updateShadowHidden;
- (BOOL)jumpWithMention:(id)arg1;
- (void)setMentionReadAndDeleteCellForIndex:(id)arg1;
- (void)setMentionsReadForIndex:(id)arg1;
- (void)updateOnDataSourceAndUIChanged;
- (BOOL)cleanViewOnDataSourceEmpty;
- (BOOL)canBeFolded;
- (double)contentMaxHeight;
- (id)curUsername;
- (id)foldedIndexPaths;
- (void)onClickArrowButton;
- (void)onLiveSystemMentionsCellClick:(id)arg1 mention:(id)arg2;
- (void)onLiveSystemMentionsCellCloseBtnClick:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (CGPoint)locationPoint;
- (void)setLocationPoint:(CGPoint)arg1;
- (void)setMentionsTableViewContainer:(id)arg1;
- (void)setMentionsTableView:(id)arg1;
- (void)setArrowButton:(id)arg1;
- (BOOL)isFolded;
- (void)setIsFolded:(BOOL)arg1;
- (double)maxHeight;
- (void)setMaxHeight:(double)arg1;
- (id)liveSystemMentions;
- (void)setLiveSystemMentions:(id)arg1;
- (void).cxx_destruct;
@end
