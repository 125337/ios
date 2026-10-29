@interface WCFinderUserRelationshipModel : NSObject
{
    BOOL _canShowFollowed; // +0x8
    BOOL _canShowMyFollow; // +0x9
    BOOL _canShowMemberFollowed; // +0xa
    BOOL _canShowAuthor; // +0xb
    unsigned int _interactionCount; // +0xc
    unsigned int _orderCount; // +0x10
    unsigned long long _style; // +0x18
    NSString * _customText; // +0x20
    UIFont * _tagLabelFont; // +0x28
    NSString * _poiInteractionLabel; // +0x30
}
- (unsigned long long)style;
- (void)setStyle:(unsigned long long)arg1;
- (BOOL)canShowFollowed;
- (void)setCanShowFollowed:(BOOL)arg1;
- (BOOL)canShowMyFollow;
- (void)setCanShowMyFollow:(BOOL)arg1;
- (BOOL)canShowMemberFollowed;
- (void)setCanShowMemberFollowed:(BOOL)arg1;
- (unsigned int)interactionCount;
- (void)setInteractionCount:(unsigned int)arg1;
- (unsigned int)orderCount;
- (void)setOrderCount:(unsigned int)arg1;
- (id)customText;
- (void)setCustomText:(id)arg1;
- (BOOL)canShowAuthor;
- (void)setCanShowAuthor:(BOOL)arg1;
- (id)tagLabelFont;
- (void)setTagLabelFont:(id)arg1;
- (id)poiInteractionLabel;
- (void)setPoiInteractionLabel:(id)arg1;
- (void).cxx_destruct;
@end
