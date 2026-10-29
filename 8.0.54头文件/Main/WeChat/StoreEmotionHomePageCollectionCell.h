@interface StoreEmotionHomePageCollectionCell : UICollectionViewCell
{
    EmojiRecommendInfo * _recommendInfo; // +0x8
    MMUILabel * _titleLabel; // +0x10
    UIImageView * _arrowImageView; // +0x18
    NSMutableArray * _singleEmoticonViewList; // +0x20
    long long _emoticonCount; // +0x28
    id /* block */ _tapHandler; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setFrame:(CGRect)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setRecommendInfo:(id)arg1;
- (void)setEmoticonCount:(long long)arg1;
- (void)createOrUpdateLayout;
- (long long)maxEmoticonCount;
- (void)onTapSingleEmoticonView:(id)arg1;
- (id)recommendInfo;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)singleEmoticonViewList;
- (void)setSingleEmoticonViewList:(id)arg1;
- (long long)emoticonCount;
- (id /* block */)tapHandler;
- (void)setTapHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end

