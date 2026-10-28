@interface WCAdLookbookCardInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    BOOL _hideItemTitle; // +0x8
    NSArray * _lookbookCardList; // +0x10
    NSString * _slideTitle; // +0x18
    NSString * _slideJumpTitle; // +0x20
    WCAdCardBtnInfo * _slideActionInfo; // +0x28
    WCAdPagInfo * _themePagInfo; // +0x30
    WCAdPagInfo * _slidePagInfo; // +0x38
    double _themeAnimDelay; // +0x40
    NSString * _charmImageUrl; // +0x48
    WCAdLookbookBrandNewItem * _brandNewItemInfo; // +0x50
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)lookbookCardList;
- (void)setLookbookCardList:(id)arg1;
- (id)slideTitle;
- (void)setSlideTitle:(id)arg1;
- (id)slideJumpTitle;
- (void)setSlideJumpTitle:(id)arg1;
- (id)slideActionInfo;
- (void)setSlideActionInfo:(id)arg1;
- (id)themePagInfo;
- (void)setThemePagInfo:(id)arg1;
- (id)slidePagInfo;
- (void)setSlidePagInfo:(id)arg1;
- (double)themeAnimDelay;
- (void)setThemeAnimDelay:(double)arg1;
- (id)charmImageUrl;
- (void)setCharmImageUrl:(id)arg1;
- (BOOL)hideItemTitle;
- (void)setHideItemTitle:(BOOL)arg1;
- (id)brandNewItemInfo;
- (void)setBrandNewItemInfo:(id)arg1;
- (void).cxx_destruct;
@end
