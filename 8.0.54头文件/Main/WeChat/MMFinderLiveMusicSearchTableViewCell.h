@interface MMFinderLiveMusicSearchTableViewCell : UITableViewCell <MMFinderLiveMusicSettingSearchExt>
{
    MMFinderLiveMusicAddDataItem * _searchMusicDataItem; // +0x8
    id /* block */ _musicAddedCallback; // +0x10
    MMWebImageView * _coverImageView; // +0x18
    MMUILabel * _musicNameLabel; // +0x20
    MMUILabel * _musicAnchorLabel; // +0x28
    MMUILabel * _durationLabel; // +0x30
    UIImageView * _addStateImage; // +0x38
    double _contentWidth; // +0x40
}
+ (double)preferHeight;
+ (double)preferLabelLeft;
+ (id)identifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutCoverImageView;
- (void)layoutMusicNameLabel;
- (void)layoutMusicAnchorLabel;
- (void)layoutDurationLabel;
- (void)layoutStateImg;
- (void)refreshContents;
- (id)highLightBrandAttrString:(id)arg1;
- (void)setSearchMusicDataItem:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (void)onMusicSearchDataItemAdded:(id)arg1;
- (void)updateMusicAddedState;
- (void)addButtonAction;
- (id)searchMusicDataItem;
- (id /* block */)musicAddedCallback;
- (void)setMusicAddedCallback:(id /* block */)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)musicNameLabel;
- (void)setMusicNameLabel:(id)arg1;
- (id)musicAnchorLabel;
- (void)setMusicAnchorLabel:(id)arg1;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg1;
- (id)addStateImage;
- (void)setAddStateImage:(id)arg1;
- (double)contentWidth;
- (void)setContentWidth:(double)arg1;
- (void).cxx_destruct;
@end

