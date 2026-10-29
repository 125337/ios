@interface WCCanvasComponentBottomSwipeInfo : MMObject <NSCoding>
{
    int _swipeActionType; // +0x8
    NSString * _swipeText; // +0x10
    NSString * _jumpUrl; // +0x18
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)swipeText;
- (void)setSwipeText:(id)arg1;
- (int)swipeActionType;
- (void)setSwipeActionType:(int)arg1;
- (id)jumpUrl;
- (void)setJumpUrl:(id)arg1;
- (void).cxx_destruct;
@end

