@interface WCFinderLongVideoSeeLaterCell : UICollectionViewCell <WCFinderFeedImageCDNViewDelegate, WCFinderGlobalPlaybackInfoExt, IWCFinderLongVideoSeeLaterView>
{
    BOOL _isLastCell; // +0x8
    BOOL _isInSeeLaterList; // +0x9
    id <WCFinderLongVideoSeeLaterCellDelegate> delegate; // +0x10
    UIView * _coverBackView; // +0x18
    WCFinderFeedImageCDNView * _coverImgView; // +0x20
    RichTextView * _titleView; // +0x28
    WCFinderAuthorContactView * _contactView; // +0x30
    UIView * _sepLine; // +0x38
    MMUIButton * _deleteButton; // +0x40
    WCFinderCustomImageRichTextView * _reasonTextView; // +0x48
    _TtC6WeChat25WCFinderSimpleProgressBar * _progressBar; // +0x50
    WCFinderFeedContentVM * _contentVM; // +0x58
    CGSize _layoutSize; // +0x60
}
+ (id)seeLaterReasonTextWithDataItem:(id)arg1;
+ (double)cellHeightWithContentVM:(id)arg1 width:(double)arg2;
+ (double)getTitleMaxWidthWithWidth:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (void)setupUI;
- (int)getCommentScene;
- (void)updateWithContentVM:(id)arg1 isLastCell:(BOOL)arg2 isInSeeLaterList:(BOOL)arg3;
- (id)getReasonContent;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)onDeleteButtonClick:(id)arg1;
- (void)onLongPress:(id)arg1;
- (void)finderFeedImageLoadFinish;
- (void)onGlobalPlaybackInfoUpdatedWithTid:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)coverBackView;
- (void)setCoverBackView:(id)arg1;
- (id)coverImgView;
- (void)setCoverImgView:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)contactView;
- (void)setContactView:(id)arg1;
- (id)sepLine;
- (void)setSepLine:(id)arg1;
- (id)deleteButton;
- (void)setDeleteButton:(id)arg1;
- (id)reasonTextView;
- (void)setReasonTextView:(id)arg1;
- (id)progressBar;
- (void)setProgressBar:(id)arg1;
- (CGSize)layoutSize;
- (void)setLayoutSize:(CGSize)arg1;
- (BOOL)isLastCell;
- (void)setIsLastCell:(BOOL)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (BOOL)isInSeeLaterList;
- (void)setIsInSeeLaterList:(BOOL)arg1;
- (void).cxx_destruct;
@end

