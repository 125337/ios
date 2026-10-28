@interface GCTextCellModel : GCChatBaseCellModel
{
    unsigned long long _textCellModelType; // +0x8
    GCTextCellLayoutInfo * _textLayoutInfo; // +0x10
    unsigned long long _subType; // +0x18
}
- (id)initWithChatroomMessage:(id)arg1;
- (void)initContentModeFromChatRoomMessage:(id)arg1;
- (id)contentModelFromMsgTpl:(id)arg1;
- (void)onUpdateContentModel;
- (id)getContentStrFromContentModel:(id)arg1;
- (Class)bindCellClass;
- (void)onChatroomMessageInitEnd;
- (void)configureWithEasyConfig:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (id)bindTextCell;
- (BOOL)subClassHandleLongPress:(id)arg1;
- (void)clearCachedLayoutInfo;
- (unsigned long long)textCellModelType;
- (void)setTextCellModelType:(unsigned long long)arg1;
- (id)textLayoutInfo;
- (void)setTextLayoutInfo:(id)arg1;
- (unsigned long long)subType;
- (void)setSubType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
