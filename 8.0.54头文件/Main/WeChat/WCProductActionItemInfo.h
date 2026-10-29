@interface WCProductActionItemInfo : NSObject
{
    BOOL isPopUp; // +0x8
    unsigned int actionType; // +0xc
    unsigned int index; // +0x10
    NSString * iconUrl; // +0x18
    NSString * title; // +0x20
    NSString * tips; // +0x28
    NSString * content; // +0x30
    NSArray * imageUrlList; // +0x38
}
- (BOOL)isPopUp;
- (void)setIsPopUp:(BOOL)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)tips;
- (void)setTips:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (unsigned int)actionType;
- (void)setActionType:(unsigned int)arg1;
- (id)imageUrlList;
- (void)setImageUrlList:(id)arg1;
- (unsigned int)index;
- (void)setIndex:(unsigned int)arg1;
- (void).cxx_destruct;
@end

