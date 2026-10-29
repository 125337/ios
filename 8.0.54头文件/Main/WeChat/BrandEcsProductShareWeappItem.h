@interface BrandEcsProductShareWeappItem : NSObject
{
    NSString * _appid; // +0x8
    NSString * _usrname; // +0x10
    NSString * _iconUrl; // +0x18
    NSString * _sourceDisplayName; // +0x20
    NSString * _path; // +0x28
    NSNumber * _bizType; // +0x30
    NSString * _title; // +0x38
    NSString * _desc; // +0x40
    NSString * _imageUrl; // +0x48
}
+ (id)makeWithAppid:(id)arg1 usrname:(id)arg2 iconUrl:(id)arg3 sourceDisplayName:(id)arg4 path:(id)arg5 bizType:(id)arg6 title:(id)arg7 desc:(id)arg8 imageUrl:(id)arg9;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)usrname;
- (void)setUsrname:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)sourceDisplayName;
- (void)setSourceDisplayName:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)bizType;
- (void)setBizType:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (void).cxx_destruct;
@end

