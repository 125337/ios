@interface WCPayBaseMessageViewModel : CommonMessageViewModel
{
    NSString * _iconUrl; // +0x70
    unsigned long long _bubbleType; // +0x78
    WCPayNetImageResource * _m_iconImageResource; // +0x80
}
- (void)updateBgBubbleType:(unsigned long long)arg1;
- (void)getIconImageResource:(id /* block */)arg1;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (BOOL)isShowSourceView;
- (id)sourceTitle;
- (id)sourceIcon;
- (id)titleText;
- (id)descText;
- (double)iconSize;
- (id)iconName;
- (id)iconUrl;
- (unsigned long long)bubbleType;
- (id)m_iconImageResource;
- (void)setM_iconImageResource:(id)arg1;
- (void).cxx_destruct;
@end

