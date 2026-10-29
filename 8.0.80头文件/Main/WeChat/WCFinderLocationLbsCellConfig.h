@interface WCFinderLocationLbsCellConfig : NSObject
{
    BOOL _isSelected; // +0x8
    int _scene; // +0xc
    int _lbsType; // +0x10
    unsigned long long _type; // +0x18
    NSString * _defaultContent; // +0x20
    FinderLbsResponse * _lbsInfo; // +0x28
}
- (BOOL)isDividerConfig;
- (id)getDividerContent;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)defaultContent;
- (void)setDefaultContent:(id)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (id)lbsInfo;
- (void)setLbsInfo:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (int)lbsType;
- (void)setLbsType:(int)arg1;
- (void).cxx_destruct;
@end
