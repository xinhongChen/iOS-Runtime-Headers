/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
 */

@interface ASABox : ASAObject

@property (getter=isAcquireSettable, nonatomic, readonly) BOOL acquireSettable;
@property (getter=isAcquired, nonatomic) BOOL acquired;
@property (nonatomic, readonly) long acquisitionFailure;
@property (nonatomic, readonly, copy) NSArray *audioDeviceObjectIDs;
@property (nonatomic, readonly, copy) NSArray *audioDevices;
@property (nonatomic, readonly, copy) NSString *boxUID;
@property (nonatomic, readonly, copy) NSArray *clockDeviceObjectIDs;
@property (nonatomic, readonly, copy) NSArray *clockDevices;
@property (nonatomic, readonly, copy) NSArray *deviceObjectIDs;
@property (nonatomic, readonly, copy) NSString *firmwareVersion;
@property (nonatomic, readonly) BOOL hasAudio;
@property (nonatomic, readonly) BOOL hasMIDI;
@property (nonatomic, readonly) BOOL hasVideo;
@property (nonatomic) BOOL identify;
@property (getter=isIdentifySettable, nonatomic, readonly) BOOL identifySettable;
@property (nonatomic, readonly) BOOL isProtected;
@property (nonatomic, readonly, copy) NSString *manufacturer;
@property (nonatomic, readonly, copy) NSString *modelName;
@property (nonatomic, readonly, copy) NSString *modelUID;
@property (nonatomic, copy) NSString *name;
@property (getter=isNameSettable, nonatomic, readonly) BOOL nameSettable;
@property (nonatomic, readonly, copy) NSString *serialNumber;
@property (nonatomic, readonly) unsigned int transportType;

- (long)acquisitionFailure;
- (id)audioDeviceObjectIDs;
- (id)audioDevices;
- (id)boxUID;
- (id)clockDeviceObjectIDs;
- (id)clockDevices;
- (id)coreAudioClassName;
- (id)deviceObjectIDs;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2;
- (id)firmwareVersion;
- (BOOL)hasAudio;
- (BOOL)hasMIDI;
- (BOOL)hasVideo;
- (BOOL)identify;
- (BOOL)isAcquireSettable;
- (BOOL)isAcquired;
- (BOOL)isIdentifySettable;
- (BOOL)isNameSettable;
- (BOOL)isProtected;
- (id)manufacturer;
- (id)modelName;
- (id)modelUID;
- (id)name;
- (id)serialNumber;
- (void)setAcquired:(BOOL)arg1;
- (void)setIdentify:(BOOL)arg1;
- (void)setName:(id)arg1;
- (unsigned int)transportType;

@end
