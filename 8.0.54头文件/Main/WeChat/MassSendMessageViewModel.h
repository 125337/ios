@interface MassSendMessageViewModel : BaseMessageViewModel
{
    NSMutableArray * m_receivers; // +0x60
    BOOL _isPlaying; // +0x68
    CEmoticonWrap * _emoticonWrap; // +0x70
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (CGSize)bodyViewSize;
- (CGSize)textViewSize;
- (CGSize)imageViewSize;
- (CGSize)voiceViewSize;
- (CGSize)videoViewSize;
- (CGSize)emoticonViewSize;
- (CGSize)finderViewSize;
- (id)receivers;
- (id)receiverString;
- (id)contentText;
- (id)previewImage;
- (double)voiceTimeLength;
- (id)voiceTimeString;
- (id)videoTimeString;
- (id)emoticonWrap;
- (BOOL)isText;
- (void)onMessageStopPlaying;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (void)setEmoticonWrap:(id)arg1;
- (void).cxx_destruct;
@end

