@interface MsgBrowserConfig : NSObject
{
    BOOL _m_bHighlightCurrentImage; // +0x8
    BOOL _isForceFullScreen; // +0x9
    unsigned int _m_uiVcType; // +0xc
    id <IntelligentMsgImgBrowseViewControllerDelegate> _m_delegate; // +0x10
    NSString * _m_nsChatName; // +0x18
    double _m_scrollOffset; // +0x20
    long long _scene; // +0x28
    unsigned long long _enterSource; // +0x30
}
- (id)init;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_nsChatName;
- (void)setM_nsChatName:(id)arg1;
- (double)m_scrollOffset;
- (void)setM_scrollOffset:(double)arg1;
- (BOOL)m_bHighlightCurrentImage;
- (void)setM_bHighlightCurrentImage:(BOOL)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (BOOL)isForceFullScreen;
- (void)setIsForceFullScreen:(BOOL)arg1;
- (unsigned int)m_uiVcType;
- (void)setM_uiVcType:(unsigned int)arg1;
- (unsigned long long)enterSource;
- (void)setEnterSource:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
