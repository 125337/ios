@interface WCAdWorldCupAvatarInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    double _containerWidth; // +0x8
    double _containerHeight; // +0x10
    double _bottomOffset; // +0x18
    WCAdPagInfo * _stageOnePagInfo; // +0x20
    WCAdPagInfo * _stageOnePagDarkInfo; // +0x28
    WCAdPagInfo * _stageTwoPagInfo; // +0x30
    WCAdPagInfo * _stageTwoPagDarkInfo; // +0x38
    WCAdPagInfo * _stageFourPagInfo; // +0x40
    WCAdPagInfo * _stageFourPagDarkInfo; // +0x48
    WCAdHotZoneRect * _stageOneHotZone; // +0x50
    WCAdHotZoneRect * _avatarHotZone; // +0x58
    WCAdHotZoneRect * _descHotZone; // +0x60
    NSArray * _optionHotZones; // +0x68
    WCAdCardBtnInfo * _clickActionInfo; // +0x70
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (BOOL)hasStageOne;
- (double)scaleForWidth:(double)arg1;
- (double)containerWidth;
- (void)setContainerWidth:(double)arg1;
- (double)containerHeight;
- (void)setContainerHeight:(double)arg1;
- (double)bottomOffset;
- (void)setBottomOffset:(double)arg1;
- (id)stageOnePagInfo;
- (void)setStageOnePagInfo:(id)arg1;
- (id)stageOnePagDarkInfo;
- (void)setStageOnePagDarkInfo:(id)arg1;
- (id)stageTwoPagInfo;
- (void)setStageTwoPagInfo:(id)arg1;
- (id)stageTwoPagDarkInfo;
- (void)setStageTwoPagDarkInfo:(id)arg1;
- (id)stageFourPagInfo;
- (void)setStageFourPagInfo:(id)arg1;
- (id)stageFourPagDarkInfo;
- (void)setStageFourPagDarkInfo:(id)arg1;
- (id)stageOneHotZone;
- (void)setStageOneHotZone:(id)arg1;
- (id)avatarHotZone;
- (void)setAvatarHotZone:(id)arg1;
- (id)descHotZone;
- (void)setDescHotZone:(id)arg1;
- (id)optionHotZones;
- (void)setOptionHotZones:(id)arg1;
- (id)clickActionInfo;
- (void)setClickActionInfo:(id)arg1;
- (void).cxx_destruct;
@end
