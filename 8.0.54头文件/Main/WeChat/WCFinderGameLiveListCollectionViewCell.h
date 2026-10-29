@interface WCFinderGameLiveListCollectionViewCell : UICollectionViewCell
{
    WCFinderGameLiveListContentView * _liveListContentView; // +0x8
}
+ (id)cellIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (id)liveListContentView;
- (void)layoutUI;
- (void)updateWithGameInfo:(id)arg1 isSelect:(BOOL)arg2;
- (void)drawSeparator;
- (void)removeSeparator;
- (void)toggle;
- (void)unToggle;
- (void)updateWithGameInfo:(id)arg1 searchText:(id)arg2;
- (void)updateCellWithRectCorner:(unsigned long long)arg1;
- (void)setLiveListContentView:(id)arg1;
- (void).cxx_destruct;
@end

