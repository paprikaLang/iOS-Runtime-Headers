/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgStateDeviceIdentifier : PBCodable <NSCopying> {
    NSString * _deviceHwIdentifier;
    NSString * _deviceOsVersion;
    struct { 
        unsigned int isInternalInstall : 1; 
        unsigned int isInternalTool : 1; 
    }  _has;
    bool  _isInternalInstall;
    bool  _isInternalTool;
}

@property (nonatomic, retain) NSString *deviceHwIdentifier;
@property (nonatomic, retain) NSString *deviceOsVersion;
@property (nonatomic, readonly) bool hasDeviceHwIdentifier;
@property (nonatomic, readonly) bool hasDeviceOsVersion;
@property (nonatomic) bool hasIsInternalInstall;
@property (nonatomic) bool hasIsInternalTool;
@property (nonatomic) bool isInternalInstall;
@property (nonatomic) bool isInternalTool;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceHwIdentifier;
- (id)deviceOsVersion;
- (id)dictionaryRepresentation;
- (bool)hasDeviceHwIdentifier;
- (bool)hasDeviceOsVersion;
- (bool)hasIsInternalInstall;
- (bool)hasIsInternalTool;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isInternalInstall;
- (bool)isInternalTool;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeviceHwIdentifier:(id)arg1;
- (void)setDeviceOsVersion:(id)arg1;
- (void)setHasIsInternalInstall:(bool)arg1;
- (void)setHasIsInternalTool:(bool)arg1;
- (void)setIsInternalInstall:(bool)arg1;
- (void)setIsInternalTool:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
