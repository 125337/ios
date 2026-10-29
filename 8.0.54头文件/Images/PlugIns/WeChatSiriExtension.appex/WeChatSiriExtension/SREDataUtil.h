@interface SREDataUtil : NSObject
+ (id)userDefaults;
+ (id)appGroupID;
+ (id)containerURL;
+ (id)contactsFilePath;
+ (unsigned long long)getCryptUin;
+ (id)getUsername;
+ (unsigned int)getAppVersion;
+ (id)getExtensionKey;
+ (id)getExtensionServerID;
+ (id)getDeviceID;
+ (id)getDeviceType;
+ (unsigned short)getHeadDeviceType;
+ (id)getShortHost;
+ (id)logFolderPath;
+ (id)logFilePath;
+ (unsigned int)getNextMsgClientId;
+ (id)currentUserName;
+ (id)decodeContactListFromFile;
+ (id)avatarFolderPath;
+ (id)avatarImageFilePathWithContactIdentifier:(id)arg1;
+ (id)avatarImageWithContactIdentifier:(id)arg1;
+ (id)dataReportFolderPath;
+ (id)dataReportFilePathForCurrentUser;
+ (id)siriContactList;
@end

