@interface WCPayCommentTextView : RichTextView <ILinkEventExt>
{
    BOOL _isShowingAlertView; // +0x98
    unsigned int _m_maxCommentLength; // +0x9c
    id <WCPayCommentTextViewDelegate> _m_alertDelegate; // +0xa0
    NSString * _m_comment; // +0xa8
    NSString * _m_initComment; // +0xb0
    NSString * _m_modifyComment; // +0xb8
    NSString * _m_inputTitle; // +0xc0
    NSString * _m_placeHolder; // +0xc8
    WCUIAlertView * _m_alertView; // +0xd0
}
- (id)init;
- (void)updateInitComment:(id)arg1;
- (void)updateModifyComment:(id)arg1;
- (void)updateComment:(id)arg1;
- (void)updateInputTitle:(id)arg1;
- (id)commentText;
- (void)updateContent;
- (void)updateCommentMaxLength:(unsigned int)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)cancelComment;
- (void)confirmComment;
- (BOOL)isFirstResponder;
- (void)updatePlaceHolder:(id)arg1;
- (id)m_alertDelegate;
- (void)setM_alertDelegate:(id)arg1;
- (id)m_comment;
- (void)setM_comment:(id)arg1;
- (id)m_initComment;
- (void)setM_initComment:(id)arg1;
- (id)m_modifyComment;
- (void)setM_modifyComment:(id)arg1;
- (id)m_inputTitle;
- (void)setM_inputTitle:(id)arg1;
- (id)m_placeHolder;
- (void)setM_placeHolder:(id)arg1;
- (unsigned int)m_maxCommentLength;
- (void)setM_maxCommentLength:(unsigned int)arg1;
- (id)m_alertView;
- (void)setM_alertView:(id)arg1;
- (BOOL)isShowingAlertView;
- (void)setIsShowingAlertView:(BOOL)arg1;
- (void).cxx_destruct;
@end

