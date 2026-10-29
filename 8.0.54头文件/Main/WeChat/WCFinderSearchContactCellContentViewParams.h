@interface WCFinderSearchContactCellContentViewParams : NSObject
{
    BOOL _isShowSeparatorLine; // +0x8
    BOOL _shouldHideFollow; // +0x9
    BOOL _useRoundHeader; // +0xa
    BOOL _shouldHiddenFriendFollow; // +0xb
    BOOL _shouldHiddenSignature; // +0xc
}
- (BOOL)isShowSeparatorLine;
- (void)setIsShowSeparatorLine:(BOOL)arg1;
- (BOOL)shouldHideFollow;
- (void)setShouldHideFollow:(BOOL)arg1;
- (BOOL)useRoundHeader;
- (void)setUseRoundHeader:(BOOL)arg1;
- (BOOL)shouldHiddenFriendFollow;
- (void)setShouldHiddenFriendFollow:(BOOL)arg1;
- (BOOL)shouldHiddenSignature;
- (void)setShouldHiddenSignature:(BOOL)arg1;
@end

