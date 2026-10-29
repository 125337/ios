@interface EmojiInputView : UIView
{
    NSArray * _emojiList; // +0x8
    id /* block */ _tapEmojiHandler; // +0x10
    NSMutableArray * _buttonList; // +0x18
}
+ (id)emojiListForScene:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setEmojiList:(id)arg1;
- (void)reloadData;
- (void)updateLayout;
- (void)setFrame:(CGRect)arg1;
- (void)onTapButton:(id)arg1;
- (id)emojiList;
- (id /* block */)tapEmojiHandler;
- (void)setTapEmojiHandler:(id /* block */)arg1;
- (id)buttonList;
- (void)setButtonList:(id)arg1;
- (void).cxx_destruct;
@end

