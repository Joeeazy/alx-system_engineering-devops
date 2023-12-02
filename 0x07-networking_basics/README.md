# Networking basics #0

# Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

# OSI Model

The OSI (Open Systems Interconnection) Model is a conceptual framework that standardizes the functions of a telecommunication or computing system into seven abstraction layers. 

Each layer serves a specific purpose and interacts with adjacent layers, providing a modular approach to understanding and designing network architectures. 

The model was developed by the International Organization for Standardization (ISO) to promote interoperability and compatibility between different systems and vendors.


The OSI Model consists of the following seven layers, listed from the lowest level to the highest level:

 * Physical Layer: Deals with the physical connection between devices, defining characteristics such as voltage levels, data rates, and physical connectors.

 * Data Link Layer: Responsible for creating a reliable link between two directly connected nodes, addressing errors in the physical layer and ensuring the accurate delivery of frames.

 * Network Layer: Manages the routing of data packets between devices on different networks, handling logical addressing and providing routing, forwarding, and congestion control.

 * Transport Layer: Ensures the reliable delivery of data between devices, handling end-to-end communication, error detection, and flow control. This layer is responsible for breaking down large messages into    smaller segments and reassembling them on the receiving end.

 * Session Layer: Establishes, maintains, and terminates communication sessions between applications, managing dialogue control, synchronization, and data exchange.

 * Presentation Layer: Translates data between the application layer and the lower layers, handling data format translation, encryption, compression, and other presentation-related tasks.

 * Application Layer: Provides network services directly to end-users or applications, dealing with high-level protocols such as HTTP, SMTP, and FTP. This layer is the closest to the end-user and interacts dir   ectly with software applications.


How it is organized

The OSI Model is organized in a hierarchical manner, with each layer building upon the services provided by the layers beneath it. 

The model helps in understanding and designing complex network systems by breaking down the communication process into manageable and well-defined layers. 

It also facilitates interoperability between different systems, as long as each system adheres to the specifications of the respective OSI layers.

# What is a LAN

* Typical usage

A LAN, or Local Area Network, is a network of interconnected computers, devices, and resources within a limited geographic area, such as a home, office, or campus. 

The primary purpose of a LAN is to enable the sharing of resources and information among connected devices. LANs typically use high-speed and relatively low-cost connections for data transfer.

LANs are commonly used for various purposes, including:

 * File Sharing: Users on a LAN can share files and documents easily, facilitating collaboration and resource sharing within a localized environment.

 * Printers and Peripherals: Printers, scanners, and other peripherals can be shared among multiple users on a LAN, reducing costs and improving efficiency.

 * Centralized Internet Access: A LAN often connects to the internet through a single gateway, allowing multiple devices to access the internet using a shared connection.

 * Application Sharing: LANs enable the sharing of software applications and databases, which can be accessed by users across the network.

 * Communication: LANs support local communication through services such as email, instant messaging, and video conferencing.

 * Resource Management: LANs make it easier to manage and administer resources, such as user accounts, security settings, and network configurations.

* Typical geographical size

The geographical size of a LAN is relatively small compared to other types of networks. 

While there is no strict definition of the maximum size of a LAN, it typically covers an area such as a single building, a floor of a building, or a campus. 

The distance covered by a LAN is usually limited to a few kilometers. 

Ethernet and Wi-Fi are common technologies used to implement LANs, providing high-speed connectivity for devices within the defined local area. 

As the distance increases, the performance of these technologies may degrade, and other types of networks, such as wide-area networks (WANs), become more suitable.

# What is a WAN
* Typical usage
* Typical geographical size

# What is the Internet

* What is an IP address

* What are the 2 types of IP address

* What is localhost

* What is a subnet

* Why IPv6 was created

# TCP/UDP

* What are the 2 mainly used data transfer protocols for IP (transfer level on the OSI schema)

* What is the main difference between TCP and UDP

* What is a port

* Memorize SSH, HTTP and HTTPS port numbers

* What tool/protocol is often used to check if a device is connected to a network
