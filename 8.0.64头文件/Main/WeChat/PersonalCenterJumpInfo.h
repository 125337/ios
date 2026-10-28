@interface PersonalCenterJumpInfo : NSObject
{
    NSString * _appId; // +0x8
    NSString * _enterPath; // +0x10
    NSNumber * _scene; // +0x18
    NSString * _sceneNote; // +0x20
    NSNumber * _requestAcct; // +0x28
    NSArray * _imgInfoList; // +0x30
    NSNumber * _picFromScene; // +0x38
    NSString * _wxaData; // +0x40
}
+ (id)makeWithAppId:(id)arg1 enterPath:(id)arg2 scene:(id)arg3 sceneNote:(id)arg4 requestAcct:(id)arg5 imgInfoList:(id)arg6 picFromScene:(id)arg7 wxaData:(id)arg8;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)enterPath;
- (void)setEnterPath:(id)arg1;
- (id)scene;
- (void)setScene:(id)arg1;
- (id)sceneNote;
- (void)setSceneNote:(id)arg1;
- (id)requestAcct;
- (void)setRequestAcct:(id)arg1;
- (id)imgInfoList;
- (void)setImgInfoList:(id)arg1;
- (id)picFromScene;
- (void)setPicFromScene:(id)arg1;
- (id)wxaData;
- (void)setWxaData:(id)arg1;
- (void).cxx_destruct;
@end
