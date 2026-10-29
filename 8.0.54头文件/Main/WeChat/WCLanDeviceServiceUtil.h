@interface WCLanDeviceServiceUtil : NSObject
+ (unsigned long long)deviceSceneForMsgWrap:(id)arg1;
+ (unsigned long long)deviceSceneForTimeLineItem:(id)arg1;
+ (unsigned long long)kissTypeForDevice:(id)arg1;
+ (BOOL)canApplyLanDeviceData:(id)arg1 withDevice:(id)arg2;
+ (id)kissLogicForLanDeviceData:(id)arg1 delegate:(id)arg2;
+ (id)HDImagePathFromImageMsgWrap:(id)arg1 inScene:(unsigned long long)arg2;
+ (id)imagePathFromImageMsgWrap:(id)arg1;
+ (id)imageKissMsgFromMsgWrap:(id)arg1;
+ (id)filePathFromMsgWrap:(id)arg1;
+ (id)fileKissMsgFromMsgWrap:(id)arg1 isNeedFileDetail:(BOOL)arg2;
+ (id)videoKissMsgFromMsgWrap:(id)arg1 isNeedFileDetail:(BOOL)arg2;
+ (id)imagePathFromImageTimeLineItem:(id)arg1;
+ (id)imageKissMsgFromImageTimeLineItem:(id)arg1;
+ (id)videoKissMsgFromTimeLineItem:(id)arg1 isNeedFileDetail:(BOOL)arg2;
+ (id)hashNameForString:(id)arg1;
+ (id)fileExtInPath:(id)arg1;
@end

