@interface TextState3rdPartyRingHandler : TextState3rdPartyFinderHandler
{
    StatusFooterJumpRingtone * _ring; // +0x8
    RingToneDetail * _ringDetail; // +0x10
    UIViewController * _vc; // +0x18
}
+ (id)genRingBackDetailSubRequestPB:(id)arg1;
- (id)initWithBuffer:(id)arg1 keyBuffer:(id)arg2;
- (unsigned int)type;
- (BOOL)preferCustomView;
- (id)mediaDescription;
- (void)jumpToRingTonePickerViewController:(id)arg1;
- (BOOL)doSourceActionWithViewController:(id)arg1 scene:(unsigned int)arg2;
- (id)ring;
- (void)setRing:(id)arg1;
- (id)ringDetail;
- (void)setRingDetail:(id)arg1;
- (id)vc;
- (void)setVc:(id)arg1;
- (void).cxx_destruct;
@end

