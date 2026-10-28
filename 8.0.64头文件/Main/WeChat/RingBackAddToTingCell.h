@interface RingBackAddToTingCell : UITableViewCell
{
    BOOL _isSelected; // +0x8
    UIImageView * _selectedImageView; // +0x10
    UIImageView * _webCoverView; // +0x18
    UILabel * _songLable; // +0x20
    UILabel * _singerLable; // +0x28
    UILabel * _timeLable; // +0x30
    UIView * _lineView; // +0x38
    UIImage * _defaultImage; // +0x40
    MMListenSimplePlayableInfo * _info; // +0x48
}
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateContent:(id)arg1 isSelected:(BOOL)arg2;
- (void)updateSelectedStatus:(BOOL)arg1;
- (void)initSubView;
- (void)layoutSubviews;
- (id)selectedImageView;
- (void)setSelectedImageView:(id)arg1;
- (id)webCoverView;
- (void)setWebCoverView:(id)arg1;
- (id)songLable;
- (void)setSongLable:(id)arg1;
- (id)singerLable;
- (void)setSingerLable:(id)arg1;
- (id)timeLable;
- (void)setTimeLable:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)defaultImage;
- (void)setDefaultImage:(id)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (void).cxx_destruct;
@end
