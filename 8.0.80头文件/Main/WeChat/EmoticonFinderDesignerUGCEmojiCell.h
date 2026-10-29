@interface EmoticonFinderDesignerUGCEmojiCell : UICollectionViewCell <IStoreEmotionSingleDownloadMgrExt>
{
    BOOL _needStaticsInfo; // +0x8
    MMWebImageView * _emoticonView; // +0x10
    UIImageView * _statusView; // +0x18
    UIView * _gradientView; // +0x20
    EmojiInfoObj * _emojiInfoObj; // +0x28
    UILabel * _sendCountLabel; // +0x30
    UIView * _sendView; // +0x38
}
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)updateWithEmojiInfo:(id)arg1;
- (void)startDownloadEmoji;
- (void)setHighlighted:(BOOL)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (BOOL)needStaticsInfo;
- (void)setNeedStaticsInfo:(BOOL)arg1;
- (id)emoticonView;
- (void)setEmoticonView:(id)arg1;
- (id)statusView;
- (void)setStatusView:(id)arg1;
- (id)gradientView;
- (void)setGradientView:(id)arg1;
- (id)emojiInfoObj;
- (void)setEmojiInfoObj:(id)arg1;
- (id)sendCountLabel;
- (void)setSendCountLabel:(id)arg1;
- (id)sendView;
- (void)setSendView:(id)arg1;
- (void).cxx_destruct;
@end
