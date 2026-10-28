@interface TextStateExternModel : NSObject
{
    BOOL _isLiked; // +0x8
    NSString * _textStateId; // +0x10
    StatusExtInfo * _statusExtInfo; // +0x18
    NSString * _username; // +0x20
    TextStateWeAppV6Stranger * _v6Stranger; // +0x28
    NSString * _distance; // +0x30
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)generateTextState;
- (id)textStateId;
- (void)setTextStateId:(id)arg1;
- (id)statusExtInfo;
- (void)setStatusExtInfo:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)v6Stranger;
- (void)setV6Stranger:(id)arg1;
- (id)distance;
- (void)setDistance:(id)arg1;
- (BOOL)isLiked;
- (void)setIsLiked:(BOOL)arg1;
- (void).cxx_destruct;
@end
