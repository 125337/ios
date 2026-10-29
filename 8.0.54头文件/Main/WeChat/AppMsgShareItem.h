@interface AppMsgShareItem : NSObject <NSCopying, PBCoding>
{
    BOOL _hasItemShowType; // +0x8
    BOOL _isNativePage; // +0x9
    BOOL _isPaySubscribe; // +0xa
    BOOL _showSourceInfo; // +0xb
    unsigned int _itemShowType; // +0xc
    unsigned int _duration; // +0x10
    unsigned int _width; // +0x14
    unsigned int _height; // +0x18
    unsigned int _funcFlag; // +0x1c
    NSDate * _pubTime; // +0x20
    NSString * _vid; // +0x28
    NSString * _coverPicImageUrl; // +0x30
    long long _picCount; // +0x38
    double _coverPicWidth; // +0x40
    double _coverPicHeight; // +0x48
}
+ (void)PBArrayAdd_hasItemShowType;
+ (void)PBArrayAdd_itemShowType;
+ (void)PBArrayAdd_isNativePage;
+ (void)PBArrayAdd_pubTime;
+ (void)PBArrayAdd_duration;
+ (void)PBArrayAdd_width;
+ (void)PBArrayAdd_height;
+ (void)PBArrayAdd_vid;
+ (void)PBArrayAdd_funcFlag;
+ (void)PBArrayAdd_isPaySubscribe;
+ (void)PBArrayAdd_showSourceInfo;
+ (void)PBArrayAdd_coverPicImageUrl;
+ (void)PBArrayAdd_picCount;
+ (void)PBArrayAdd_coverPicWidth;
+ (void)PBArrayAdd_coverPicHeight;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)description;
- (BOOL)hasItemShowType;
- (void)setHasItemShowType:(BOOL)arg1;
- (unsigned int)itemShowType;
- (void)setItemShowType:(unsigned int)arg1;
- (BOOL)isNativePage;
- (void)setIsNativePage:(BOOL)arg1;
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
- (BOOL)showSourceInfo;
- (void)setShowSourceInfo:(BOOL)arg1;
- (id)coverPicImageUrl;
- (void)setCoverPicImageUrl:(id)arg1;
- (long long)picCount;
- (void)setPicCount:(long long)arg1;
- (double)coverPicWidth;
- (void)setCoverPicWidth:(double)arg1;
- (double)coverPicHeight;
- (void)setCoverPicHeight:(double)arg1;
- (void).cxx_destruct;
@end

