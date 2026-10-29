@interface WCContactItemDeleteView : MMUIView
{
    UILabel * _displayNameLabel; // +0x8
    UIView * _headImageView; // +0x10
    UIButton * _deleteButton; // +0x18
    CContact * _contact; // +0x20
    id <WCContactItemDeleteViewDelegate> _deleteViewDelegate; // +0x28
}
- (void)initDeleteButton;
- (void)initHeadImage;
- (void)initDisplayName;
- (void)onClickHeadImage;
- (void)onClickDeleteButton;
- (id)initWithContact:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)deleteViewDelegate;
- (void)setDeleteViewDelegate:(id)arg1;
- (void).cxx_destruct;
@end

