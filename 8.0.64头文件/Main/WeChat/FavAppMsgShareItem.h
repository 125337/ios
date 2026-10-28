@interface FavAppMsgShareItem : FavoritesModel
{
    BOOL _nativePage; // +0x8
    BOOL _isPaySubscribe; // +0x9
    unsigned int _itemShowType; // +0xc
    unsigned int _duration; // +0x10
    unsigned int _width; // +0x14
    unsigned int _height; // +0x18
    unsigned int _funcFlag; // +0x1c
    NSString * _srcUsername; // +0x20
    NSString * _srcDisplayName; // +0x28
    NSString * _cover; // +0x30
    NSDate * _pubTime; // +0x38
    NSString * _vid; // +0x40
    NSString * _coverPicImageUrl; // +0x48
    long long _picCount; // +0x50
    double _coverPicWidth; // +0x58
    double _coverPicHeight; // +0x60
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)toXML;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (unsigned int)itemShowType;
- (void)setItemShowType:(unsigned int)arg1;
- (BOOL)nativePage;
- (void)setNativePage:(BOOL)arg1;
- (id)srcUsername;
- (void)setSrcUsername:(id)arg1;
- (id)srcDisplayName;
- (void)setSrcDisplayName:(id)arg1;
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
