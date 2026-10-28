@interface EmotionStoreDetailDesignerContainerView : EmoticonCellLikeButton
{
    UIView * m_contentView; // +0x8
    MMWebImageView * m_designerHeaderView; // +0x10
    UILabel * m_designerNameLabel; // +0x18
    UILabel * m_designerPageLabel; // +0x20
    MMUIActivityIndicatorView * m_loadingView; // +0x28
    UIView * m_lineInTop; // +0x30
    UIView * m_lineInBottom; // +0x38
    PersonalDesigner * _personalDesigner; // +0x40
    EmotionActivity * _emotionActivity; // +0x48
}
+ (id)lineView;
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)setDesignerHeaderSideLen:(double)arg1;
- (void)setPersonalDesigner:(id)arg1;
- (void)setEmotionActivity:(id)arg1;
- (void)setIsShowLineInTop:(BOOL)arg1 IsShowLineInBottom:(BOOL)arg2;
- (void)setContentInsets:(UIEdgeInsets)arg1;
- (void)startLoading;
- (void)stopLoading;
- (id)personalDesigner;
- (id)emotionActivity;
- (void).cxx_destruct;
@end
