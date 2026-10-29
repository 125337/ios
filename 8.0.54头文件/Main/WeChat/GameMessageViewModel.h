@interface GameMessageViewModel : CommonMessageViewModel
{
    unsigned int m_gameType; // +0x70
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (unsigned int)realGameIndex;
- (BOOL)hasReferImage;
- (id)getReferImage;
- (id)additionalAccessibilityDescription;
- (unsigned int)gameType;
@end

