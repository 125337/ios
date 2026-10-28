@interface MMFinderLiveTrumpetSelectCell : WCTableViewNormalCellManager
{
    MMFinderLiveTrumpetSelectCellInfo * _info; // +0x8
    id <MMFinderLiveTrumpetSelectCellDelegate> _delegate; // +0x10
    MMUIView * _contentView; // +0x18
    WCFinderHeadImageView * _headImageView; // +0x20
    MMUIImageView * _createAccountImageView; // +0x28
    MMUILabel * _titleLabel; // +0x30
    MMUILabel * _subtitleLabel; // +0x38
    UIImageView * _selectStateImageView; // +0x40
}
- (id)initWithWidth:(double)arg1 height:(double)arg2 delegate:(id)arg3 info:(id)arg4;
- (void)initCellConfig;
- (void)setupSubviewsWith:(double)arg1 height:(double)arg2;
- (void)initSubviewsWith:(double)arg1 height:(double)arg2;
- (void)layoutUI;
- (void)onClickContent;
- (id)info;
- (void)setInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)createAccountImageView;
- (void)setCreateAccountImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)selectStateImageView;
- (void)setSelectStateImageView:(id)arg1;
- (void).cxx_destruct;
@end
