@interface MMFinderLiveDropGiftDetailCardViewModel : NSObject
{
    UIImage * _backgroundImage; // +0x8
    NSString * _title; // +0x10
    NSString * _desc; // +0x18
    NSString * _subDesc; // +0x20
    NSString * _giftImgUrl; // +0x28
    NSString * _coinImgUrl; // +0x30
    NSString * _coinSum; // +0x38
    Class _cardViewClazz; // +0x40
}
+ (id)defaultForOpenGiftDetailCardViewUnavailable;
+ (id)defaultForOpenGiftDetailCardViewForAnchor;
+ (id)defaultForFirstOpenGiftDetailCardViewForAudience;
- (id)coinImgUrl;
- (id)backgroundImage;
- (void)setBackgroundImage:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)subDesc;
- (void)setSubDesc:(id)arg1;
- (id)giftImgUrl;
- (void)setGiftImgUrl:(id)arg1;
- (void)setCoinImgUrl:(id)arg1;
- (id)coinSum;
- (void)setCoinSum:(id)arg1;
- (Class)cardViewClazz;
- (void)setCardViewClazz:(Class)arg1;
- (void).cxx_destruct;
@end

