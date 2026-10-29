@interface WCAdSelectInfo : NSObject <NSCoding>
{
    NSString * leftBtnTitle; // +0x8
    NSString * rightBtnTitle; // +0x10
    WCAdCardBtnInfo * _leftBtnClickActionInfo; // +0x18
    WCAdCardBtnInfo * _rightBtnClickActionInfo; // +0x20
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)leftBtnTitle;
- (void)setLeftBtnTitle:(id)arg1;
- (id)rightBtnTitle;
- (void)setRightBtnTitle:(id)arg1;
- (id)leftBtnClickActionInfo;
- (void)setLeftBtnClickActionInfo:(id)arg1;
- (id)rightBtnClickActionInfo;
- (void)setRightBtnClickActionInfo:(id)arg1;
- (void).cxx_destruct;
@end

