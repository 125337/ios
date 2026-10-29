@interface WCPayGPSelectMemberCellView : MMUIView
{
    BOOL _disableSelect; // +0x8
    CContact * _contact; // +0x10
    CContact * _chatroomContact; // +0x18
    NSString * _comment; // +0x20
}
+ (double)calcHeightForCellWithContact:(id)arg1 chatroomContact:(id)arg2 comment:(id)arg3;
- (id)initWithFrame:(CGRect)arg1 contact:(id)arg2 chatroomContact:(id)arg3 comment:(id)arg4 disableSelect:(BOOL)arg5;
- (void)setupContentView;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)chatroomContact;
- (void)setChatroomContact:(id)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
- (BOOL)disableSelect;
- (void)setDisableSelect:(BOOL)arg1;
- (void).cxx_destruct;
@end

