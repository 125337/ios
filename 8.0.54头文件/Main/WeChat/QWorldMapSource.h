@interface QWorldMapSource : NSObject
{
    NSDictionary * _originData; // +0x8
    int _scenetype; // +0x10
    NSString * _style; // +0x18
    NSString * _scene; // +0x20
    NSString * _version; // +0x28
    NSString * _url; // +0x30
    NSArray * _range; // +0x38
}
- (id)initWithDict:(id)arg1;
- (id)originalTileSrc;
- (int)scenetype;
- (void)setScenetype:(int)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (id)scene;
- (void)setScene:(id)arg1;
- (id)version;
- (void)setVersion:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)range;
- (void)setRange:(id)arg1;
- (void).cxx_destruct;
@end

