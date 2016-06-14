/*
Navicat MySQL Data Transfer

Source Server         : Arma 3 Max
Source Server Version : 50713
Source Host           : localhost:3306
Source Database       : altislife

Target Server Type    : MYSQL
Target Server Version : 50713
File Encoding         : 65001

Date: 2016-06-14 05:37:15
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for containers
-- ----------------------------
DROP TABLE IF EXISTS `containers`;
CREATE TABLE `containers` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `pid` varchar(32) NOT NULL,
  `classname` varchar(32) NOT NULL,
  `pos` varchar(64) DEFAULT NULL,
  `inventory` text NOT NULL,
  `gear` text NOT NULL,
  `dir` varchar(128) DEFAULT NULL,
  `active` tinyint(1) NOT NULL DEFAULT '0',
  `owned` tinyint(1) DEFAULT '0',
  `insert_time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`,`pid`)
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=utf8mb4;

-- ----------------------------
-- Records of containers
-- ----------------------------

-- ----------------------------
-- Table structure for economy
-- ----------------------------
DROP TABLE IF EXISTS `economy`;
CREATE TABLE `economy` (
  `ID` int(255) NOT NULL AUTO_INCREMENT,
  `ressource` varchar(255) NOT NULL,
  `sellprice` int(255) NOT NULL,
  `buyprice` int(255) NOT NULL,
  `varprice` int(255) NOT NULL,
  `minprice` int(255) NOT NULL,
  `maxprice` int(255) NOT NULL,
  `factor` int(255) NOT NULL,
  `shoptype` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`ID`)
) ENGINE=InnoDB AUTO_INCREMENT=82 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of economy
-- ----------------------------
INSERT INTO `economy` VALUES ('1', 'apple', '150', '200', '1', '50', '150', '3', 'market');
INSERT INTO `economy` VALUES ('3', 'heroin_processed', '1653', '4500', '1', '1480', '3050', '2', 'drugdealer');
INSERT INTO `economy` VALUES ('4', 'salema_raw', '132', '550', '1', '125', '500', '4', 'fish');
INSERT INTO `economy` VALUES ('5', 'ornate_raw', '148', '550', '1', '125', '500', '4', 'fish');
INSERT INTO `economy` VALUES ('6', 'mackerel_raw', '420', '1100', '1', '250', '1000', '4', 'fish');
INSERT INTO `economy` VALUES ('7', 'tuna_raw', '1932', '2100', '1', '500', '2000', '4', 'fish');
INSERT INTO `economy` VALUES ('8', 'mullet_raw', '285', '1100', '1', '250', '1000', '4', 'fish');
INSERT INTO `economy` VALUES ('9', 'catshark_raw', '1000', '1100', '1', '250', '1000', '4', 'fish');
INSERT INTO `economy` VALUES ('10', 'rabbit_grilled', '500', '500', '10', '80', '500', '0', 'market');
INSERT INTO `economy` VALUES ('12', 'turtle_raw', '9000', '17000', '2', '6390', '9000', '2', 'turtle');
INSERT INTO `economy` VALUES ('13', 'waterBottle', '10', '10', '13', '5', '10', '0', 'market');
INSERT INTO `economy` VALUES ('14', 'coffee', '10', '10', '14', '5', '10', '0', 'coffee');
INSERT INTO `economy` VALUES ('15', 'turtle_soup', '2500', '2500', '15', '1000', '2500', '0', 'wongs');
INSERT INTO `economy` VALUES ('16', 'donut', '120', '120', '16', '60', '120', '0', 'coffee');
INSERT INTO `economy` VALUES ('17', 'marijuana', '1786', '4500', '1', '1480', '3000', '2', 'drugdealer');
INSERT INTO `economy` VALUES ('18', 'tbacon', '25', '500', '0', '25', '500', '0', 'market');
INSERT INTO `economy` VALUES ('19', 'lockpick', '1500', '1500', '19', '75', '1500', '0', 'rebel');
INSERT INTO `economy` VALUES ('20', 'redgull', '1500', '1500', '20', '200', '1500', '0', 'market');
INSERT INTO `economy` VALUES ('21', 'peach', '150', '175', '1', '50', '150', '3', 'market');
INSERT INTO `economy` VALUES ('29', 'glass', '3350', '3300', '1', '1000', '3350', '3', 'glass');
INSERT INTO `economy` VALUES ('30', 'fuelFull', '850', '850', '30', '300', '850', '0', 'market');
INSERT INTO `economy` VALUES ('31', 'spikeStrip', '2500', '2500', '31', '1200', '2500', '0', 'cop');
INSERT INTO `economy` VALUES ('33', 'goldbar', '60000', '100000', '25', '35000', '60000', '2', 'gold');
INSERT INTO `economy` VALUES ('34', 'blastingcharge', '24996', '35000', '34', '15000', '35000', '0', 'rebel');
INSERT INTO `economy` VALUES ('35', 'boltcutter', '7500', '7500', '35', '3000', '7500', '0', 'rebel');
INSERT INTO `economy` VALUES ('36', 'defusekit', '2500', '2500', '36', '1500', '2500', '0', 'cop');
INSERT INTO `economy` VALUES ('37', 'storagesmall', '70878', '75000', '37', '60000', '75000', '0', 'market');
INSERT INTO `economy` VALUES ('38', 'storagebig', '131172', '150000', '38', '120000', '150000', '0', 'market');
INSERT INTO `economy` VALUES ('39', 'pickaxe', '750', '750', '39', '500', '750', '0', 'market');
INSERT INTO `economy` VALUES ('45', 'oil_unprocessed', '1500', '3500', '2', '500', '1500', '0', 'raw');
INSERT INTO `economy` VALUES ('46', 'oil_processed', '4000', '4500', '1', '1500', '4000', '3', 'oil');
INSERT INTO `economy` VALUES ('47', 'copper_unrefined', '150', '150', '47', '59', '150', '0', 'raw');
INSERT INTO `economy` VALUES ('48', 'copper_refined', '2808', '3000', '1', '1000', '3000', '3', 'iron');
INSERT INTO `economy` VALUES ('49', 'iron_unrefined', '150', '150', '49', '57', '150', '0', 'raw');
INSERT INTO `economy` VALUES ('50', 'iron_refined', '2914', '3000', '1', '1000', '3000', '3', 'iron');
INSERT INTO `economy` VALUES ('51', 'salt_unrefined', '150', '150', '1', '57', '150', '0', 'raw');
INSERT INTO `economy` VALUES ('52', 'salt_refined', '1113', '3500', '1', '1000', '2350', '3', 'salt');
INSERT INTO `economy` VALUES ('53', 'sand', '150', '150', '53', '57', '150', '0', 'raw');
INSERT INTO `economy` VALUES ('55', 'diamond_uncut', '150', '150', '55', '57', '150', '0', 'raw');
INSERT INTO `economy` VALUES ('56', 'diamond_cut', '2540', '3500', '1', '1000', '3500', '3', 'diamond');
INSERT INTO `economy` VALUES ('57', 'rock', '150', '150', '57', '57', '150', '0', 'raw');
INSERT INTO `economy` VALUES ('58', 'cement', '2500', '3000', '1', '1000', '2500', '3', 'cement');
INSERT INTO `economy` VALUES ('59', 'mushroom', '150', '150', '59', '57', '150', '0', 'raw');
INSERT INTO `economy` VALUES ('60', 'heroin_unprocessed', '150', '150', '60', '57', '150', '0', 'raw');
INSERT INTO `economy` VALUES ('62', 'cannabis', '2500', '4000', '62', '1500', '2000', '0', 'raw');
INSERT INTO `economy` VALUES ('64', 'cocaine_unprocessed', '150', '150', '64', '57', '150', '0', 'raw');
INSERT INTO `economy` VALUES ('65', 'cocaine_processed', '2184', '5000', '1', '1950', '4000', '2', 'drugdealer');
INSERT INTO `economy` VALUES ('66', 'froglsd', '1577', '4300', '1', '1480', '3000', '2', 'drugdealer');
INSERT INTO `economy` VALUES ('67', 'Magicm', '2000', '3500', '1', '1000', '2000', '2', 'drugdealer');
INSERT INTO `economy` VALUES ('68', 'ziptie', '900', '1500', '0', '1', '1500', '0', 'vigilante');
INSERT INTO `economy` VALUES ('69', 'underwatercharge', '15000', '20000', '0', '1', '20000', '0', 'civ');
INSERT INTO `economy` VALUES ('70', 'goldbarp', '86903', '100000', '25', '10000', '90000', '3', 'civ');
INSERT INTO `economy` VALUES ('71', 'heliblastcharge', '20000', '25000', '0', '20000', '25000', '0', 'civ');
INSERT INTO `economy` VALUES ('72', 'lostcargo', '35000', '100000', '30', '5000', '35000', '3', 'civ');
INSERT INTO `economy` VALUES ('73', 'gpstracker', '7500', '15000', '0', '0', '0', '0', 'special');
INSERT INTO `economy` VALUES ('74', 'speedbomb', '25000', '1000000', '0', '0', '0', '0', 'rebel');
INSERT INTO `economy` VALUES ('75', 'rabbit_raw', '3067', '5500', '1', '2000', '5000', '4', 'hunting');
INSERT INTO `economy` VALUES ('76', 'hen_raw', '5000', '5500', '1', '2000', '5000', '4', 'hunting');
INSERT INTO `economy` VALUES ('77', 'rooster_raw', '5000', '5500', '1', '2000', '5000', '4', 'hunting');
INSERT INTO `economy` VALUES ('78', 'sheep_raw', '10000', '11000', '1', '4000', '10000', '4', 'hunting');
INSERT INTO `economy` VALUES ('79', 'goat_raw', '10000', '11000', '1', '4000', '10000', '4', 'hunting');
INSERT INTO `economy` VALUES ('80', 'bottledwhiskey', '2500', '2750', '1', '1000', '2500', '2', 'pub');
INSERT INTO `economy` VALUES ('81', 'bottledbeer', '1500', '1500', '1', '500', '1500', '2', 'pub');

-- ----------------------------
-- Table structure for gangs
-- ----------------------------
DROP TABLE IF EXISTS `gangs`;
CREATE TABLE `gangs` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `owner` varchar(32) DEFAULT NULL,
  `name` varchar(32) DEFAULT NULL,
  `members` text,
  `maxmembers` int(2) DEFAULT '8',
  `bank` int(100) DEFAULT '0',
  `active` tinyint(4) DEFAULT '1',
  PRIMARY KEY (`id`),
  UNIQUE KEY `name_UNIQUE` (`name`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of gangs
-- ----------------------------

-- ----------------------------
-- Table structure for houses
-- ----------------------------
DROP TABLE IF EXISTS `houses`;
CREATE TABLE `houses` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `pid` varchar(32) NOT NULL,
  `pos` varchar(64) DEFAULT NULL,
  `inventory` text,
  `containers` text,
  `owned` tinyint(4) DEFAULT '0',
  PRIMARY KEY (`id`,`pid`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of houses
-- ----------------------------

-- ----------------------------
-- Table structure for messages
-- ----------------------------
DROP TABLE IF EXISTS `messages`;
CREATE TABLE `messages` (
  `uid` int(12) NOT NULL AUTO_INCREMENT,
  `fromID` varchar(50) NOT NULL,
  `toID` varchar(50) NOT NULL,
  `message` text,
  `fromName` varchar(32) NOT NULL,
  `toName` varchar(32) NOT NULL,
  `time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`uid`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of messages
-- ----------------------------

-- ----------------------------
-- Table structure for players
-- ----------------------------
DROP TABLE IF EXISTS `players`;
CREATE TABLE `players` (
  `uid` int(12) NOT NULL AUTO_INCREMENT,
  `name` varchar(32) NOT NULL,
  `playerid` varchar(50) NOT NULL,
  `cash` int(100) NOT NULL DEFAULT '0',
  `bankacc` int(100) NOT NULL DEFAULT '0',
  `coplevel` enum('0','1','2','3','4','5','6','7','8','9') NOT NULL DEFAULT '0',
  `swatlevel` enum('0','1','2','3') NOT NULL DEFAULT '0',
  `cop_licenses` text,
  `civ_licenses` text,
  `med_licenses` text,
  `cop_gear` text NOT NULL,
  `med_gear` text NOT NULL,
  `mediclevel` enum('0','1','2','3','4','5') NOT NULL DEFAULT '0',
  `arrested` tinyint(1) NOT NULL DEFAULT '0',
  `aliases` text NOT NULL,
  `adminlevel` enum('0','1','2','3') NOT NULL DEFAULT '0',
  `donatorlvl` enum('0','1','2','3','4','5') NOT NULL DEFAULT '0',
  `rprank` enum('0','1','2','3') NOT NULL DEFAULT '0',
  `civ_gear` text NOT NULL,
  `jail_time` int(11) NOT NULL DEFAULT '0',
  `alive` tinyint(1) NOT NULL DEFAULT '0',
  `position` text,
  `blacklist` tinyint(1) NOT NULL DEFAULT '0',
  `admin_user` varchar(50) DEFAULT NULL,
  `admin_pass` varchar(50) DEFAULT NULL,
  `timeupdated` timestamp NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  `timejoined` datetime DEFAULT NULL,
  PRIMARY KEY (`uid`),
  UNIQUE KEY `playerid` (`playerid`),
  KEY `name` (`name`),
  KEY `blacklist` (`blacklist`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of players
-- ----------------------------

-- ----------------------------
-- Table structure for vehicles
-- ----------------------------
DROP TABLE IF EXISTS `vehicles`;
CREATE TABLE `vehicles` (
  `id` int(12) NOT NULL AUTO_INCREMENT,
  `side` varchar(15) NOT NULL,
  `classname` varchar(32) NOT NULL,
  `type` varchar(12) NOT NULL,
  `pid` varchar(32) NOT NULL,
  `alive` tinyint(1) NOT NULL DEFAULT '1',
  `active` tinyint(1) NOT NULL DEFAULT '0',
  `gps` tinyint(4) NOT NULL DEFAULT '0',
  `trunk` tinyint(4) NOT NULL DEFAULT '0',
  `security` tinyint(4) NOT NULL DEFAULT '0',
  `insurance` tinyint(4) NOT NULL DEFAULT '0',
  `hooks` tinyint(4) NOT NULL DEFAULT '0',
  `plate` int(20) NOT NULL,
  `color` int(20) NOT NULL,
  `inventory` varchar(500) NOT NULL,
  PRIMARY KEY (`id`),
  KEY `side` (`side`),
  KEY `pid` (`pid`),
  KEY `type` (`type`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of vehicles
-- ----------------------------

-- ----------------------------
-- Table structure for wanted
-- ----------------------------
DROP TABLE IF EXISTS `wanted`;
CREATE TABLE `wanted` (
  `wantedID` varchar(50) NOT NULL,
  `wantedName` varchar(52) NOT NULL,
  `wantedCrimes` text NOT NULL,
  `wantedBounty` int(100) NOT NULL,
  `active` tinyint(1) NOT NULL DEFAULT '0',
  PRIMARY KEY (`wantedID`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of wanted
-- ----------------------------

-- ----------------------------
-- Procedure structure for deleteDeadVehicles
-- ----------------------------
DROP PROCEDURE IF EXISTS `deleteDeadVehicles`;
DELIMITER ;;
CREATE DEFINER=`arma3`@`localhost` PROCEDURE `deleteDeadVehicles`()
BEGIN
  DELETE FROM `vehicles` WHERE `alive` = 0;
END
;;
DELIMITER ;

-- ----------------------------
-- Procedure structure for deleteOldContainers
-- ----------------------------
DROP PROCEDURE IF EXISTS `deleteOldContainers`;
DELIMITER ;;
CREATE DEFINER=`arma3`@`localhost` PROCEDURE `deleteOldContainers`()
BEGIN
  DELETE FROM `containers` WHERE `owned` = 0;
END
;;
DELIMITER ;

-- ----------------------------
-- Procedure structure for deleteOldGangs
-- ----------------------------
DROP PROCEDURE IF EXISTS `deleteOldGangs`;
DELIMITER ;;
CREATE DEFINER=`arma3`@`localhost` PROCEDURE `deleteOldGangs`()
BEGIN
  DELETE FROM `gangs` WHERE `active` = 0;
END
;;
DELIMITER ;

-- ----------------------------
-- Procedure structure for deleteOldHouses
-- ----------------------------
DROP PROCEDURE IF EXISTS `deleteOldHouses`;
DELIMITER ;;
CREATE DEFINER=`arma3`@`localhost` PROCEDURE `deleteOldHouses`()
BEGIN
  DELETE FROM `houses` WHERE `owned` = 0;
END
;;
DELIMITER ;

-- ----------------------------
-- Procedure structure for resetLifeVehicles
-- ----------------------------
DROP PROCEDURE IF EXISTS `resetLifeVehicles`;
DELIMITER ;;
CREATE DEFINER=`arma3`@`localhost` PROCEDURE `resetLifeVehicles`()
BEGIN
  UPDATE `vehicles` SET `active`= 0;
END
;;
DELIMITER ;
DROP TRIGGER IF EXISTS `player_create`;
DELIMITER ;;
CREATE TRIGGER `player_create` BEFORE INSERT ON `players` FOR EACH ROW SET NEW.timejoined = NOW()
;;
DELIMITER ;
