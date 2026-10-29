@interface WCAppMsgShareInfo : NSObject <WCContentShareable>
{
    BOOL _hasItemShowType; // +0x8
    BOOL _isNativePage; // +0x9
    BOOL _isPaySubscribe; // +0xa
    unsigned int _itemShowType; // +0xc
    unsigned int _duration; // +0x10
    unsigned int _width; // +0x14
    unsigned int _height; // +0x18
    unsigned int _funcFlag; // +0x1c
    NSString * _digest; // +0x20
    NSString * _cover; // +0x28
    NSDate * _pubTime; // +0x30
    NSString * _vid; // +0x38
    long long _picCount; // +0x40
}
+ (void)PBArrayAdd_hasItemShowType;
+ (void)PBArrayAdd_itemShowType;
+ (void)PBArrayAdd_isNativePage;
+ (void)PBArrayAdd_digest;
+ (void)PBArrayAdd_cover;
+ (void)PBArrayAdd_pubTime;
+ (void)PBArrayAdd_duration;
+ (void)PBArrayAdd_width;
+ (void)PBArrayAdd_height;
+ (void)PBArrayAdd_vid;
+ (void)PBArrayAdd_funcFlag;
+ (void)PBArrayAdd_isPaySubscribe;
+ (void)PBArrayAdd_picCount;
+ (void)initialize;
+ (BOOL)isSupport:(XmlReaderNode_t *)arg1;
+ (id)fromXML:(XmlReaderNode_t *)arg1;
+ (id)xmlTag;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toXML;
- (id)description;
- (BOOL)isValidBizMpBigPic;
- (BOOL)hasItemShowType;
- (void)setHasItemShowType:(BOOL)arg1;
- (unsigned int)itemShowType;
- (void)setItemShowType:(unsigned int)arg1;
- (BOOL)isNativePage;
- (void)setIsNativePage:(BOOL)arg1;
- (id)digest;
- (void)setDigest:(id)arg1;
- (id)cover;
- (void)setCover:(id)arg1;
- (id)pubTime;
- (void)setPubTime:(id)arg1;
- (unsigned int)duration;
- (void)setDuration:(unsigned int)arg1;
- (unsigned int)width;
- (void)setWidth:(unsigned int)arg1;
- (unsigned int)height;
- (void)setHeight:(unsigned int)arg1;
- (id)vid;
- (void)setVid:(id)arg1;
- (unsigned int)funcFlag;
- (void)setFuncFlag:(unsigned int)arg1;
- (BOOL)isPaySubscribe;
- (void)setIsPaySubscribe:(BOOL)arg1;
- (long long)picCount;
- (void)setPicCount:(long long)arg1;
- (void).cxx_destruct;
@end

